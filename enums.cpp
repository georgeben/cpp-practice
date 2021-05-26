#include <cstdio>

int main()
{
    struct User {
        const char * name;
        int gender; // I want to represent the gender using an integer
    };
    int female = 0;
    int male = 1;
    
    User george = { "George", male };
    printf("gender: %d\n", george.gender);
    
    // I want gender to only be either male or female, but right now nothing stops me from
    // doing this
    george.gender = 50;
    printf("gender: %d\n", george.gender); // Now, gender makes no sense

    /*
     Enums to the resuce!
     An enum is a way to give a name to a value. It can also limit the values a variable can hold
     to certail allowed values.
     */
    enum Gender {
      F, M
    };
    // By default F is assigned 0, and M 1
    struct UserV2 {
        const char * name;
        Gender gender;
    };
    
    UserV2 ben = { "Ben", M };
    printf("gender: %d\n", ben.gender);
    
    // Settingben.gender to any random value not specified in the enum will cause an error
    //    ben.gender = 13; -> Error
}