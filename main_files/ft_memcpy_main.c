/* 
* memcpy -- copy memory area
* The memcpy() function copies n bytes from memory area src to memory area dst.  
* If dst and src overlap, behavior is undefined.  
* Applications in which dst and src might overlap should use memmove(3) instead.
* The memcpy() function returns the original value of dst.
*/

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;
	// Typecast src and dest addresses to (char *)
	char *csrc = (char *)src;
	char *cdst = (char *)dst;

	i = 0; 
	// Copy contents of src[] to dest[]
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return(dst);
}

int main()
{
	char str1[] = "Geeks";  
	char str2[] = "Quiz";  

	puts("str1 before memcpy ");
	puts(str1);

	/* Copies contents of str2 to sr1 */
	ft_memcpy (str1, str2, sizeof(str2));

	puts("\nstr1 after memcpy ");
	puts(str1);
	return 0;
}


/*
* Output:
* str1 before memcpy 
* Geeks

* str1 after memcpy 
* Quiz
*/

