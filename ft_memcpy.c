/* 
* memcpy -- copy memory area
* The memcpy() function copies n bytes from memory area src to memory area dst.  
* If dst and src overlap, behavior is undefined.  
* Applications in which dst and src might overlap should use memmove(3) instead.
* The memcpy() function returns the original value of dst.
*/

/*
* #include <stdio.h>
*/

void *ft_memcpy(void *dst, const void *src, size_t n)
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
	return (dst);
}
/*
int main()
* {
*	char dst[100] = "Libc is";
*	char src[100] = "the standard library.";
*
*	ft_memcpy(dst, src, sizeof(src));
*	printf("dst after memset(): %s\n", dst);
*	return 0;
* }
*/