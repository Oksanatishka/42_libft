/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:20:28 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:20:33 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memmove -- copy byte string
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner. The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char*)dst;
	s = (char*)src;
	i = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		i = len;
		while (i--)
			((char*)d)[i] = ((char*)s)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char*)d)[i] = ((char*)s)[i];
			i++;
		}
	}
	return (d);
}

/*
** void * memmove(void *s1, const void *s2, size_t n)
** {
**     return memcpy(s1, s2, n);
** }
*/

/*
** int main()
** {
** 	char dst[100] = "Libc is";
** 	char src[100] = "the standard library.";
** 	ft_memmove(dst, src, 5);
** 	printf("dst after memset(): %s\n", dst);
** 	return 0;
** }
*/
