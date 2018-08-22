/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:29:35 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:29:37 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcmp -- compare byte string
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			i;

	i = -1;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (++i < n && *(s1c + i) == *(s2c + i))
		;
	if (i == n)
		return (0);
	return (*(s1c + i) - *(s2c + i));
}

/*
** int main () {
**    char str1[15] = "abcdef";
**    char str2[15] = "ABCDEF";
**    int result;
**
**    result = memcmp(str1, str2, 5);
**    if(result > 0) {
**       printf("str2 is less than str1");
**    } else if(result < 0) {
**       printf("str1 is less than str2");
**    } else {
**       printf("str1 is equal to str2");
**    }
**    return(0);
** }
*/
