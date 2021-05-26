#include <cstdio>

int main()
{
    const int ONE = 1;
    const int TWO = 2;
    const int THREE = 3;
    
    int val = 2;
    
    switch(val) {
        case ONE:
            puts("one");
            break;
        case TWO:
            puts("two");
            break;
        case THREE:
            puts("three");
            break;
        default:
            puts("default");
            break;
    }
    return 0;
}
