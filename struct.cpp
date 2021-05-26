#include <cstdio>

int main()
{
    /*
     A struct is an aggregated variable i.e made up of a number of discrete variables
     */
    struct User {
      /* A character pointer can be used to store a string literal
        the const declares that the character is constant not the pointer
        to make the pointer constant, place const after the *
      */
        const char * name;
        int age;
    };
    User user1 = { age: 21, name: "George" };
    printf("Name of user: %s \n", user1.name);
    printf("Age of user: %d \n", user1.age);
    return 0;
}
