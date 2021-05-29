#include <cstdio>

int main()
{
    /*
     A struct is an aggregated variable i.e made up of a number of discrete variables
     */
    struct User {
      /* A character pointer can be used to store a string literal
        the const declares that the character it points to is constant not the pointer
        to make the pointer constant, place const after the *
      */
        const char * name;
        int age;
    };
    User user1 = { age: 21, name: "George" };
    printf("Name of user: %s \n", user1.name);
    printf("Age of user: %d \n", user1.age);

    struct Car {
        const char * brand;
        const char * name;
        int model;
    };
    
    Car audi = { "Audi", "RS8", 2021 };
    Car * cp = &audi;
    printf("%s %s %d edition\n", cp -> brand, audi.name, audi.model);
    return 0;
}
