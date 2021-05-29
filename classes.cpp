//  Created by Benjamin George on 27/05/2021.

#include <cstdio>

// Classes are very similar to struct
// The only difference between struct and class is that data members
// in a struct default to public, while data members in a class default to private
// Use struct when there are only data members, use class when there
// would be function members (methods)
class MyClass {
    int val;
public:
    // Object's interface
    MyClass(); // Default constructor
    MyClass(int num); // Constructor with argument
    ~MyClass(); // Destructor
    int getValue();
    int getValue() const; // Adding const to the end of the function definition
    // means the function is const-safe and can be called by a const qualified object;
    void setValue(int val);
};



MyClass::MyClass() {
    puts("running constructor for MyClass");
}

MyClass::MyClass(int num) : val(num) {
    puts("running constructor with arguments for MyClass");
}

MyClass::~MyClass() {
    puts("running destructor for MyClass");
}

// Object's implementation
int MyClass::getValue() {
    return val;
}

// Adding cost after the parenthesis indicates that the function is const-safe
int MyClass::getValue() const {
    // This const-safe function is not allowed to modify any property
    // of the object from which it was called
    puts("\nconst-safe function");
    return val;
}

void MyClass::setValue(int i) {
    val = i;
}

int main()
{
    MyClass obj;
    obj.setValue(59);
    printf("Value: %d\n", obj.getValue());
    
    const MyClass obj2 = obj;
    printf("Value: %d\n", obj2.getValue());
    
    MyClass obj3(100);
    printf("Value: %d\n", obj3.getValue());
    return 0;
}
