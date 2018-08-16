/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:32:28 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:32:33 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcat, strncat -- concatenate strings
*/

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0' && n--)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s1);
}

/*
**  int main () {
**     char s1[50] = "This is s1. ";
**     char s2[50] = "This is s2.";
**
**     ft_strncat(s1, s2, 5);
**     printf("Final string : %s\n", s1);
**
**     return(0);
**  }
*/
