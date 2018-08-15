/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:32:09 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:32:11 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** stpcpy, stpncpy, strcpy, strncpy -- copy strings
*/

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && (i < len))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
**  int main ()
**  {
**      char example[50];
**
**      ft_strncpy(example, "Life is good!", 9);
**      printf("%s\n", example);
**
**     return(0);
**  }
*/
