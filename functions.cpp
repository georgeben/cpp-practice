//  Created by Benjamin George on 27/05/2021.

#include <cstdio>
#include <string>
#include <cstdarg>

void f(int n) {
    // Parameters are copied by value. That is, n is a copy
    // of the argument that was passed to this function.
    // Modifying n does not affect the value of the argument that was passed
    ++n;
}

void k(int * n) {
    // The parameter is a pointer to the argument that was passed in.
    // In this function, parameters are passed in by reference. Therefore,
    // changing the value of n affects the value of the original argument
    ++(*n);
}

void sayHello(const std::string name) {
    printf("Hello %s\n", name.c_str());
}

// A function that returns a reference
const std::string & getName() {
    // Id name is not declared as static, by the time the function returns
    // the reference would point to a non-existent value, because name
    // would be destroyed after a function executes (by default)
    const static std::string name = "George";
    return name;
}

void myFunc() {
    puts("Running myFunc()\n");
}

// Variadic functions are functions that take a variable number of parameters
// ... is the variadic argument, it depends on the <cstdarg> header
double average(int count, ...) {
    double total = 0;
    va_list args; // step 1
    va_start(args, count); // step 2
    for (int i = 0; i < count; i++) {
        total += va_arg(args, double); // step 2
    }
    va_end(args); // step 4
    return (total / count);
}

unsigned long factorial(long n) {
    if (n < 2) return n;
    long result = 1;
    for (long i = n; i; i--) {
        result *=i;
    }
    return result;
}

int main()
{
    int num = 5;
    f(num);
    printf("Value after f(): %d\n", num);
    
    k(&num); // Passing the address of num to k()
    printf("Value after k(): %d\n", num);
    
    // Values are passed to functions in data structures called stacks
    // The stack has a relatively small space. Hence, passing large values to a function
    // would lead to copying large amounts of data to the stack, which could cause a stack overflow
    // When you want to pass a large value to a func, it's more efficient to use a reference
    
    sayHello("George");
    
    printf("The name is %s\n", getName().c_str());
    
    // Function pointers
    void (*func_ptr)() = myFunc; //func_ptr is the name of the function pointer
    (*func_ptr)(); // Calling the function
    
    auto result = average(3, 6.0,7.0,8.0);
    printf("Average is %.2f\n", result);
    
    int x = 5;
    printf("\nFactorial of %d is %lu\n", x, factorial(x));
}
