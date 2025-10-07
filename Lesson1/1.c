#include <stdio.h>

int main() // why int main? because the OS expects an exit status from the program. main is the standardized entry point in C.
           // The integer return value allows communication back to the environment.
{
    int x = 42;  // normal variable
    int *p = &x; // p stores the address of x

    printf("x value: %d\n", x);         // prints 42
    printf("x address: %p\n", &x);      // prints memory address
    printf("p (address): %p\n", p);     // same as &x
    printf("p dereferenced: %d\n", *p); // prints 42
    return 0;
}

/*

A pointer is a variable that stores the memory address of another variable.
Instead of holding a direct value (like int a = 10;), a pointer holds where that value lives in memory.

& → “address-of” operator (gives the address of a variable)

* → “dereference” operator (gives the value stored at that address)

*/