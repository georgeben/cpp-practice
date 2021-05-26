#include <cstdio>

int static_func(){
    static int x = 7;
    return ++x;
}

int func() {
    int x = 7;
    return ++x;
}
int main()
{
    /*
     Qualifiers adjust the qualities of a variable
     There are two types of qualifiers in C++: CV and Storage duration
     CV: const, mutable and volatile
     Storage duration: By default a variable has the life time of the block it was defined in.
        includes static (last the duration of the program), extern, register
    */
    // Default lifetime
    printf("the integer is %d\n", func());
    printf("the integer is %d\n", func());
    printf("the integer is %d\n", func());
    
    printf("\n\nthe static integer is %d\n", static_func());
    printf("the static integer is %d\n", static_func());
    printf("the static integer is %d\n", static_func());
    
    // If a class variable is declared as static, all instance of that class will; share the same variable
}