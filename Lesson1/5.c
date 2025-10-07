#include <stdio.h>

int main()
{
    char str[] = "Hello";

    char *p = str;

    printf("%c\n", *p);       // H
    printf("%c\n", *(p + 1)); // e
    printf("%s\n", p);        // Hello

    return 0;
}

/*
p points to the first character.

p+1 points to the next character, and so on.

Printing with %s tells printf to keep printing characters until it finds '\0'.
*/