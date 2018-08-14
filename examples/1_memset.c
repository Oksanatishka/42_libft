// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8 * sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}

// Output:

// Before memset(): GeeksForGeeks is for programming geeks.
// After memset(): GeeksForGeeks........programming geeks.