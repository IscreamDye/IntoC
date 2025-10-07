#include <stdio.h>

int main()
{
    char *fruits[] = {"Apple", "Banana", "Cherry"};

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", fruits[i]); // prints each string
    }

    return 0;
}
