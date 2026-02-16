#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *rcapitalize(char *param_1)
{
    int len1 = strlen(param_1);
    int test = 0;
    char *result = malloc(len1 + 1);

    if (len1 == 0)
    {
        return param_1;
    }

    for (int i = 0; i < len1; i++)
    {

        if (param_1[i + 1] == ' ' || param_1[i + 1] == '\t')
        {
            result[i] = toupper(param_1[i]);
        }
        else if (!isalpha(param_1[i + 1]))
        {
            result[i] = toupper(param_1[i]);
        }
        else
        {
            result[i] = tolower(param_1[i]);
        }
    }
    // result = toupper(result[len1 - 1]);
    result[len1] = '\0';
    printf(result);
}

int main()
{
    // Test examples
    char str1[] = "a FiRSt LiTTlE TESt";
    char str2[] = "";
    char str3[] = "SecONd teST A LITtle BiT   Moar comPLEX";
    char str4[] = "   But... This iS not THAT COMPLEX";
    rcapitalize(str1);

    // Call rcapitalize and print results
    /*
    printf("Input: \"%s\"\nOutput: \"%s\"\n\n", str1, rcapitalize(str1));
    printf("Input: \"%s\"\nOutput: \"%s\"\n\n", str2, rcapitalize(str2));
    printf("Input: \"%s\"\nOutput: \"%s\"\n\n", str3, rcapitalize(str3));
    printf("Input: \"%s\"\nOutput: \"%s\"\n\n", str4, rcapitalize(str4));*/

    return 0;
}
