/*
* memchr -- locate byte in byte string
* The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
* In other words, memchr() function search for the first occurrence of a character in a specified number of characters.
* The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int i = 0;

	int c;
	char *cs = s;
	while (i < n)
	{
		if (*cs == c)
		{
			return cs;
		}
		else
		{
			return cs++;
		}
		i++;
	}
	return (s);
}

int main()
{
	const char str[] = "http://www.tutorialspoint.com";
	const char ch = '.';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
}