/*
* strlen, strnlen -- find length of string
* The strlen() function computes the length of the string s.
* The strlen() function returns the number of characters that precede the terminating NUL character.
*/

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	const char *str;
	while (str = s)
	{
		++str;
		*str;
	}
	return(str - s);
}

int main()
{
	char *string = "Hello World";
    printf("%lu\n", (unsigned long)ft_strlen(string));
	return 0;
}

/* Result: 11 */

// int my_strlen(char *string)
// {
// 	int length;
// 	for (length = 0; *string != '\0', string++)
// 	{
// 	length++;
// 	}
// 	return(length);
// }