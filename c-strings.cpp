//  Created by Benjamin George on 21/05/2021.
#include <cstdio>

int main()
{
    /*
     A primitive string is essentially an array of characters
     */
    char name[] = "George";
    printf("Name: %s \n", name);
    
    //  ❗️A primitive string is an array of characters terminated with null or zero
    //   characters always use single quotes
    char food[] = {'B', 'u', 'r', 'g', 'e', 'r', 0}; // Terminated with 0
    printf("Food: %s\n", food);
    
    // Looping through a string. Stop when the current element is 0, since a string is terminated with 0
    for(int i = 0; name[i] != 0; ++i) {
        printf("Character: %c\n", name[i]);
    }
    
    // Looping using pointers
    puts("\n");
    for (char *ch = name; *ch != 0; ++ch) {
        printf("Character: %c\n", *ch);
    }
    return 0;
}
