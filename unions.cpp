#include<cstdio>

int main()
{
   /*
    A union can only store the value of one member at a time. All the members in a union
    share the same memory space
    */
    struct A {
        int x;
        int y;
    };
    A a;
    printf("Size of a is %lu bits\n", sizeof(a) * 8);
    // An integer takes 32 bits of memory. Struct A comprises of two intergers hence takes up
    // 2 * 32 = 64 bits
    
    union B {
        char x;
        int y;
    };
    B b;
    
    // This uses only 32 bits of memory
    printf("Size of b is %lu bits\n", sizeof(b) * 8);
}