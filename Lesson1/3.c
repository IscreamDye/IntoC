#include <stdio.h>

void addOne(int *n)
{
    (*n)++;
    *n = 10;            // this points to that adress and changes value. lets try now?
    printf("%d\n", *n); // add this *
}

int main()
{
    int a = 5;
    addOne(&a);
    printf("after change: %d\n", a);
    return 0;
}