/*
* memcmp -- compare byte string
* The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
* The memcmp() function returns zero if the two strings are identical, 
* otherwise returns the difference between the first two differing bytes (treated as unsigned char values, 
* so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  
* This behavior is not required by C and portable code should only depend on the sign of the returned value.
*/

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *p1 = s1, *p2 = s2;
    while(n--)
    {
    	if( *p1 != *p2 )
            return *p1 - *p2;
        else {
        	p1++;
        	p2++;
        }
    }   
    return 0;
}

int main()
{
	ft_memcmp("OK", "OKEY", 10);
	return 0;
}