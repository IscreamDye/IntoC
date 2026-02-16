#include <stdio.h>
#include <string.h>

// Define a structure to hold an array of strings
typedef struct s_string_array // defines a custom type string_array that can hold multiple strings.
{
    int size;     // number of strings in the array
    char **array; // pointer to an array of strings
} string_array;
//-------------------------------------------------------

// Function to print all words in the string_array
void my_print_words_array(string_array *param_1) // takes a pointer to such a struct and prints all the words inside.
{
    for (int i = 0; i < param_1->size; i++) // loop through each string
    {
        printf("%s\n", param_1->array[i]); // print one string per line
    }
}
//-------------------------------------------------------

// In main, we build a simple list of strings (words) and pass it into the struct.
int main()
{
    // Example data: an array of strings
    char *words[] = {"Hello", "world", "C", "is", "fun"};

    // Create a string_array and fill it
    string_array arr;
    arr.size = 5;      // number of words
    arr.array = words; // point to our array of strings

    // Call the function to print the words
    my_print_words_array(&arr);

    return 0;
}
//-------------------------------------------------------
