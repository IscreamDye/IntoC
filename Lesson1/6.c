#include <stdio.h>

int stringLength(char *str)
{
    int length = 0;
    while (*str != '\0') // about this
    {                    // until null terminator
        printf("%c \n", *str);
        length++;
        str++; // move pointer to next character
    }
    return length;
}

int main()
{
    char word[] = "Pointers";
    printf("Length: %d\n", stringLength(word));
    return 0;
}