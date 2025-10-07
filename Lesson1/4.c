#include <stdio.h>

int main()
{
    // Two Ways to Declare Strings

    char str1[] = "Hello"; // mutable (can be changed)
    str1[0] = 'Y';         // allowed

    // This actually stores in memory:'H' 'e' 'l' 'l' 'o' '\0' each letter
    // -------park street 17--------
    //--------H------- 00
    //--------E------- 01

    char *str2 = "Hello"; // immutable (cannot be changed safely) read-only storage.
    str2[0] = 'Y';        // ❌ undefined behavior
    printf("%s", str2);
    // what is stack and what is heap.
    // The stack is memory that grows/shrinks automatically when functions are called and return.
    // The heap is a big pool of memory managed at runtime.

    return 0;
}