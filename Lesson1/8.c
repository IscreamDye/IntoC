#include <stdio.h>

int main()
{
    char fruits[3][20] = {"Apple asdasd", "Banana", "Cherry"}; // 3 strings, each max 9 chars + '\0' // make 2d array

    fruits[1][4] = 'M'; // change "Apple" → "Mpple"

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", fruits[i]);
    }

    return 0;
}

/*

Summary

A string is an array of char ending with '\0'.

char str[] = "Hi"; → stored in writable memory.

char *str = "Hi"; → points to a string literal (read-only).

Strings are passed to functions as char *.

Array of strings = char *arr[] (immutable strings).

2D char array = char arr[rows][cols] (mutable strings).

*/