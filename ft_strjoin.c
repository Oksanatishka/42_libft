/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:58:52 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:58:54 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’, result of the concatenation of s1 and s2. If
** the allocation fails the function returns NULL.
** Param. #1 The prefix string.
** Param. #2 The suffix string.
** Return value The “fresh” string result of the concatenation of the 2 strings.
** Libc functions malloc(3)
**
**
** We begin by declaring three variables. The first two will be counters we
** will use to move through our strings. The third is the new string that
** we will be allocating memory to in order to return the concatenation of
** our parameter strings.
**
** If the allocation failed we will return NULL.
** If the allocation worked we begin our concatenation of our given strings.
** We start with s1 with a standard string loop saying that as long as we
** have not reached the end of the string, continue. We place the index
** of both our new string str and our parameter s1 at i which at this
** moment is 0. We then run through the length of s1 placing each character
** in s1 into str. Once this has finished we continue to the next loop.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
