#include <stdio.h>
#include <string.h>

char *msg = "This is the string: not copied";

int main()
{
    char my_buffer[80];
    memset(my_buffer, '\0', 80);
    memccpy(my_buffer, msg, ':', 80);
    printf("%s\n", my_buffer);
}

/*
* Output:
* This is the string:
*/