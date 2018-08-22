/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:33:45 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:33:48 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strstr, strcasestr, strnstr -- locate a substring in a string
** The function finds the first occurrence of the substring needle
** in the string haystack.
*/

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}

/*
** int main () {
**    const char haystack[20] = "TutorialsPoint";
**    const char needle[10] = "Tu";
**    char *result;
**
**    result = ft_strstr(haystack, needle);
**    printf("The substring is: %s\n", result);
**    return(0);
** }
*/
