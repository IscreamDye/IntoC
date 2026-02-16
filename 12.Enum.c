#include <stdio.h>
#include <string.h>

/*
An enum (enumeration) is a user-defined type that lets you give names to integer constants.
It makes code easier to read and understand.
Example idea:
Instead of remembering that 0 = RED, 1 = GREEN, 2 = BLUE,
you can write:

enum color {
    RED,
    GREEN,
    BLUE
};

By default, the first value gets 0, and every next value increases by 1.

So:

Name	Value
RED	    0
GREEN	1
BLUE	2

enum error_code {
    OK = 0,
    NOT_FOUND = 404,
    SERVER_ERROR = 500
};

Just like value pairs.


*/

enum direction
{
    NORTH,
    SOUTH,
    EAST,
    WEST
};

int main()
{
    enum direction d = EAST;
    if (d == EAST)
        printf("Going east!\n");
    return 0;
}

// d is just variable name. name of enum direction. you assign a value from created enum at top.
// you can only assign value that are defined inside enum direction