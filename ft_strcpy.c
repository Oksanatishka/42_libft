/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:30:26 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:30:29 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** stpcpy, stpncpy, strcpy, strncpy -- copy strings
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

/*
** int main ()
** {
**     char example[50];
**
**     ft_strcpy(example, "Life is good!");
**     printf("%s\n", example);
**
**    return(0);
** }
*/
