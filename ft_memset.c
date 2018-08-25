/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:12:09 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 13:08:57 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset -- fill a byte string with a byte value.
** The memset() function writes len bytes of value c
** (converted to an unsigned char) to the string b.
** The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

/*
** int main()
** {
** 	char str[100] = "Libc is the standard library.";
**
**	ft_memset(str, '.', 8 * sizeof(char));
**	printf("After memset(): %s\n", str);
**	return 0;
** }
*/
