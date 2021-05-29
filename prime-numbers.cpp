//  Created by Benjamin George on 27/05/2021.

#include <cstdio>


bool isPrime(int n) {
    // 2 and 3 are prime
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    int checks = 0;
    for (int i = 5; i < n; i++) {
        ++checks;
        if (n % i == 0) {
            printf("Completed after %d checks.\n", checks);
            return false;
        }
    }
    printf("Completed after %d checks.\n", checks);
    return true;
}

bool isPrimeV2(int n) {
    // 2 and 3 are prime
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    int checks = 0;
    // Any number greater than n/2 cannot be a factor of n
    for (int i = 5; i < (n / 2); i++) {
        ++checks;
        if (n % i == 0) {
            printf("Completed after %d checks.\n", checks);
            return false;
        }
    }
    printf("Completed after %d checks.\n", checks);
    return true;
}

bool isPrimeV3(int n) {
    // 2 and 3 are prime
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    int checks = 0;
    // All factors of n must be less than or equal to the sqrt of n
    for (int i = 5; i <= (int)(sqrt(n)); i++) {
        ++checks;
        if (n % i == 0) {
            printf("Completed after %d checks.\n", checks);
            return false;
        }
    }
    printf("Completed after %d checks.\n", checks);
    return true;
}

bool isPrimeV4(int n) {
    // 2 and 3 are prime
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;

    int checks = 0;

    // All prime numers are either +1 or -1 greater than a multiple of 6
    // p +/- 1 = 6k where k is any naturale number
    // Starting at 5, which is 6-1 and 5+2 which is 6+1, then incrementing by 6
    for (int i = 5; i <= (int)(sqrt(n)); i+=6) {
        ++checks;
        if ((n % i == 0) || (n % (i + 2) == 0)) {
            printf("Completed after %d checks.\n", checks);
            return false;
        }
    }
    printf("Completed after %d checks.\n", checks);
    return true;
}


int main()
{
    // Example values: 7, 17, 61, 15485863
    int num = 17;
    puts("Prime v1");
    printf("%d %s\n", num, isPrime(num) ? "prime" : "not prime");

    puts("\n\nPrime v2");
    printf("%d is %s\n", num, isPrimeV2(num) ? "prime" : "not prime");
    
    puts("\n\nPrime v3");
    printf("%d is %s\n", num, isPrimeV3(num) ? "prime" : "not prime");
    
    puts("\n\nPrime v4");
    printf("%d is %s\n", num, isPrimeV4(num) ? "prime" : "not prime");
    return 0;
    
}
