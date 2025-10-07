#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 10;      // length of the string (not counting '\0')
    char param_1 = 'a'; // character to fill

    // Allocate memory for a string: "size" characters + 1 for null terminator
    char *str = malloc((size + 1) * sizeof(int)); // 2 or 4 bytes

    if (str == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // exit if malloc failed
    }

    // Fill the string with 'a'
    for (int i = 0; i < size; i++)
    {
        str[i] = param_1;
    }

    // Null terminator so printf knows where the string ends
    str[size] = '\0';

    // Print the string
    printf("%s\n", str); // output: aaaaaaaaaa

    // Free the allocated memory
    free(str);

    return 0;
}
