/*
* bzero -- write zeroes to a byte string
* The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
*/

void ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;

	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
	return;
}

/*
* void	ft_bzero(void *s, size_t n)
* {
* 	ft_memset(s, 0, n);
* }
*/

/*
* int main()
* {
*    char str[100] = "Libc is the standard library for the C programming language.";
*
*    ft_bzero(str + 3, 1);
*    printf("After memset(): %s\n", str);
*    return 0;
* }
*/