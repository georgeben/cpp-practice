#include <iostream>
#include <cstdint>

int main()
{
  // There are five types of integers
    char a = 0;
    short int b = 0;
    int c = 0;
    long int d = 0;
    long long int e = 0;
    
    printf("The size of char is: %zd\n", sizeof(a) * 8);
    printf("The size of short int is: %zd\n", sizeof(b) * 8);
    printf("The size of int is: %zd\n", sizeof(c) * 8);
    printf("The size of long int is: %zd\n", sizeof(d) * 8);
    printf("The size of long long int is: %zd\n", sizeof(e) * 8);

    printf("\nThe size of int8_t: %lu\n", sizeof(int8_t) * 8);
    return 0;
}
