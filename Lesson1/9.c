// malloc = memory allocation
/*

It allocates a block of memory of size bytes from the heap.

Returns a pointer to the beginning of that block.

If it fails (not enough memory), it returns NULL.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 7;       // number of characters we want in the string
    char param_1 = 'a'; // the character to fill the string with

    char *ptr = malloc(size + 1); // Allocate memory for 10 characters + 1 for the null terminator
    // Always good practice: check if malloc succeeded
    // if (ptr == NULL) { printf("Allocation failed\n"); return 1; }

    for (int i = 0; i < size; i++) // Fill the first 10 positions with 'a'
    {
        ptr[i] = param_1;
    }
    ptr[size] = '\0';  // Add the null terminator at the end so it's a valid C string
    printf("%s", ptr); // Print the string: this will print "aaaaaaaaaa"
    free(ptr);         // Free the memory when done (important to avoid leaks/run out of memory)

    return 0;
}