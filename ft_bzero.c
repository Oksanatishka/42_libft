/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 13:53:28 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 13:53:38 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** bzero -- write zeroes to a byte string
** The bzero() function writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
	return ;
}

/*
** void	ft_bzero(void *s, size_t n)
** {
** 	ft_memset(s, 0, n);
** }
*/

/*
** int main()
** {
**    char str[100] = "Libc is the standard library.";
**
**    ft_bzero(str + 3, 1);
**    printf("After memset(): %s\n", str);
**    return 0;
** }
*/
