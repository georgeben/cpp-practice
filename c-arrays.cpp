//  Created by Benjamin George on 21/05/2021.

#include <cstdio>

int main()
{
    /* An array is a FIXED SIZED container of objects, where each object
     is of THE SAME type. An array is stored CONTIGUOUSLY
    */
    // Creates an array to store 5 integers
    int arr[5]; // Once defined, the size of an array cannot be changed
    
    // Initialize the first element of the array to 10;
    arr[0] = 10;
    printf("Item at index 0 of array: %d \n", arr[0]);
    
    /* the variable arr also behaves like a pointer to the first element of the array
     Hence, the value of the first element of an array can also be changed like so:
     */
    *arr = 20;
    printf("Item at index 0 of array: %d \n", arr[0]);
    
    int *arr_pointer = arr;

    /* In C++, pointers are strongly typed i.e they know the size of what they point to,
    when you increment a pointer, it increments by the size of the type it is defined with
    */
    ++arr_pointer; // Returns the address of the next element in the array
    *arr_pointer = 40; // Sets the value of the second element in the array
    printf("\nItem at index 0 of array: %d \n", arr[0]);
    printf("Item at index 1 of array: %d \n", arr[1]);
    
    // Set the value of the next element in the array
    *(++arr_pointer) = 60;
    printf("\nItem at index 0 of array: %d \n", arr[0]);
    printf("Item at index 1 of array: %d \n", arr[1]);
    printf("Item at index 2 of array: %d \n", arr[2]);
    
    // An array can also be created like so:
    int scores[] = { 40, 70, 65, 92 }; // In this case, the size is automatically inferred
    
    // Looping through an array
    puts("\nDisplaying scores");
    for (int i: scores) {
        printf("%d ", i);
    }
    puts("");
}
