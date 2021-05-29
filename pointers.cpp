//  Created by Benjamin George on 21/05/2021.

#include <cstdio>

int main(){
    int a = 10;
    // Creates a new variable b, and initializes it with the value of a
    // i.e the value stored at the memory location identified by 'a' is *COPIED* into the
    // new memory address identified by b
    int b = a;
    printf("The value of a: %d \n", a);
    printf("The value of b: %d \n", b);
    
    // Changing the value of a does not affect b
    a = 20;
    printf("\nAfter updating a: \n");
    printf("The value of a: %d \n", a);
    printf("The value of b: %d \n", b);
    
    // Pointers store the memory address of a variable
    // Initializes a pointer called 'ap'
    int * ap = &a;
    
    printf("\nThe value of a: %d \n", a);
    // To retrieve the value stored in the address a pointer points to, you need to dereference the pointer
    // by using an asterisk (*)
    printf("The value of ap: %d \n", *ap); // *ap resolves to the value of a
    
    a = 30;
    // When the value of a is updated, dereferencing the pointer will always return the
    // updated value stored in the address it points to
    printf("\nAfter updating a: \n");
    printf("The value of a: %d \n", a);
    printf("The value of ap: %d \n", *ap);
    
    return 0;
}
