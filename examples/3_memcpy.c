/* A C program to demonstrate working of memcpy */
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    puts("str1 before memcpy ");
    puts(str1);

    /* Copies contents of str2 to sr1 */
    memcpy(str1, str2, sizeof(str2));

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}