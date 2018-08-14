/*
* memset -- fill a byte string with a byte value
* The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
* The memset() function returns its first argument.
*/

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *p = b;

	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

/*
* int main()
* {
* 	char str[100] = "Libc is the standard library for the C programming language.";
*
*	ft_memset(str, '.', 8 * sizeof(char));
*	printf("After memset(): %s\n", str);
*	return 0;
* } 
*/