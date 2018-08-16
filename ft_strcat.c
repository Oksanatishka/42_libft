/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:31:57 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:32:00 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strcat, strncat -- concatenate strings
*/

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

/*
** int main () {
**    char s1[50] = "This is s1. ";
**    char s2[50] = "This is s2.";
**
**    ft_strcat(s1, s2);
**    printf("Final string : %s\n", s1);
**
**    return(0);
** }
*/
