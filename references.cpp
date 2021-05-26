//  Created by Benjamin George on 21/05/2021.

#include <cstdio>

int main()
{
    int a = 10;
    // A reference is like a clone of a variable. Updating the value of a reference updates
    // the variable it was referencing and vice-versa.
    // A reference is like a marriage: tow shall become one, LOL.
    int & aref = a;
    
    printf("Value of a: %d\n", a);
    printf("Value of aref: %d\n", aref);
    
    // Updating the value of aref also updates the value of a!!
    aref = 100;
    printf("\nAfter updating\n");
    printf("Value of a: %d\n", a); // a is now 100
    printf("Value of aref: %d\n", aref);
    
    // Updating references can lead to unexpected outcomes in your code, hence always
    // declare your references as constant i.e const int & aref = a;
    return 0;
}
