/*
* memccpy -- copy string until character found
* The memccpy() function copies bytes from string src to string dst.  
* If the character c (as converted to an unsigned char) occurs in the string src, 
* the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  
* Otherwise, n bytes are copied, and a NULL pointer is returned.
* The source and destination strings should not overlap, as the behavior is undefined.
*/

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	char *cdst = (char *) dst;
	char *csrc = (char *) src;

	i = 0;
	while (i < n)
	{
		if (csrc[i] != c)
		{
			cdst[i] = csrc[i];
			i++;
		} else {
			break;
		}
		
	}
	return(dst);

}

int main()
{
	char src1[20];
	char src2[] = "Bibik";
	
	printf("Before %s\n", src1);
	ft_memccpy(src1, src2, 'k', 3);
	printf("After %s\n", src1);
	return 0;
}

/*
* Output:
* Before
* 

* after
* Bib
*/