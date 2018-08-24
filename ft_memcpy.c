/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:04:24 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 16:14:37 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcpy -- copy memory area
** The memcpy() function copies n bytes from memory area src
** to memory area dst. If dst and src overlap, behavior is undefined.
** Applications in which dst and src might overlap should use
** memmove(3) instead. The memcpy() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
** int main()
** {
** 	char dst[100] = "Libc is";
** 	char src[100] = "the standard library.";
**
** 	ft_memcpy(dst, src, sizeof(src));
** 	printf("dst after memset(): %s\n", dst);
** 	return 0;
** }
*/
