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
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
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

/*
** int main()
** {
** 	char s1[10] = "String 1.";
** 	char s2[10] = "String 2.";
** 	char *result = ft_strjoin(s1, s2);
** 	printf("The result is %s\n", result);
** 	printf("s1 doesn't change: %s\n", s1);
** 	printf("s2 doesn't change: %s\n", s2);
** 	return 0;
** }
*/
