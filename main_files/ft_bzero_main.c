/*
* bzero -- write zeroes to a byte string
* The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.
*/

#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p = s;

	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
	return ;
}

/*
* void	ft_bzero(void *s, size_t n)
* {
* 	ft_memset(s, 0, n);
* }
*/

int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore bzero(): %s\n", str);
 
    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str + 13, 8*sizeof(char));
 
    printf("After bzero():  %s", str);
    return 0;
}

/*
* Output:
* Before memset(): GeeksForGeeks is for programming geeks.
* After memset():  GeeksForGeeks
*/