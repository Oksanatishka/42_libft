/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 16:18:15 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 16:22:16 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memccpy -- copy string until character found
** The memccpy() function copies bytes from string src to string dst.
** If the character c (as converted to an unsigned char) occurs
** in the string src, the copy stops and a pointer to the byte after
** the copy of c in the string dst is returned. Otherwise, n bytes are copied,
** and a NULL pointer is returned. The source and destination strings
** should not overlap, as the behavior is undefined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	char *cdst = (char *)dst;
	char *csrc = (char *)src;

	i = 0;
	while (i < n)
	{
		if (csrc[i] != c)
		{
			cdst[i] = csrc[i];
			i++;
		}
		else
		{
			break;
		}
	}
	return (dst);
}

/*
** int main()
** {
**	char dst[100] = "Libc is";
**	char src[100] = "the standard library.";
**	char c = 'e';
**
**	ft_memccpy(dst, src, c, sizeof(src));
**	printf("dst after memccpy(): %s\n", dst);
**	return 0;
** }
*/
