#include <cstdio>

int main()
{
    const int count = 100;
    int * space;
    try {
        // 'new' Allocates a block memory space in the HEAP for storing an array of 100 integers
        // The address of the allocated memory space is stored in the pointer 'space'
        space = new int[count];
    } catch (std::bad_alloc & ba) {
        // If  the specified memory space is not available, a bad alloc exception is thrown
        fprintf(stderr, "Cannot allocate memory: %s\n", ba.what());
        return 1;
    }
    *space = 10;
    printf("Value in memory location: %d\n", *space);
    
    // When you use 'new to allocate memory, the compiler doesn't deallocate it, so
    // you must explicitly deallocate the memory you created to avoid memory leaks
    delete [] space; // Deletes the block of allocated memory
    
}