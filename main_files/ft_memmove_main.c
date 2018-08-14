/*
* memmove -- copy byte string
* The memmove() function copies len bytes from string src to string dst.  
* The two strings may overlap; the copy is always done in a non-destructive manner.
* The memmove() function returns the original value of dst.
*/

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	char *cdst = (char *) dst;
	char *csrc = (char *) src;
	/* Create a temporary array to hold data of src */
   	char *temp;
	i = 0;
	
	while (i < len)
	{
		/* Copy data from csrc[] to temp[] */
		temp[i] = csrc[i];
		/* Copy data from temp[] to cdest[] */
		cdst[i] = temp[i];
		i++;
	}
	
	return(dst);
}


/* 
* void * memmove(void *s1, const void *s2, size_t n)
* {
*     return memcpy(s1, s2, n);
* }
*/

int main()
{
	char dst1[20];
	char src1[] = "Oksana";
	ft_memmove(dst1, src1, 4);
	printf("After %s\n", dst1);
	return 0;
}


/*
* Output:
* After 
* Oksa
*/

