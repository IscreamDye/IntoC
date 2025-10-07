#include <stdio.h>

void addOne(int n) // void returns nothing?
{
    n++;
    printf("1. try add one: %d\n", n); // exists only here.
    return;                            // here
}

int main()
{
    int a = 5;
    addOne(a);
    printf("2. did not modify %d\n", a); // still 5, because a copy was modified
    return 0;
}
// error