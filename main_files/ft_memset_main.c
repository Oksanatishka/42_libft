/*
* memset -- fill a byte string with a byte value
* The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
* The memset() function returns its first argument.
*/

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p = b;

	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return(b);
}

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
 
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8*sizeof(char));
 
    printf("After memset():  %s", str);
    return 0;
}

/*
* Output:
* Before memset(): GeeksForGeeks is for programming geeks.
* After memset():  GeeksForGeeks........programming geeks.
*/