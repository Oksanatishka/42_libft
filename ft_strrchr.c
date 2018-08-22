/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:33:29 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:33:32 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strchr, strrchr -- locate character in string
** The strrchr() function is identical to strchr(),
** except it locates the last occurrence of c.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		k;

	i = 0;
	k = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			k = i;
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	if (k == -1)
		return (0);
	return ((char *)&s[k]);
}

/*
** int main () {
**    const char str[] = "http://www.tutorialspoint.com";
**    const char ch = '.';
**    char *result;
**
**    result = ft_strrchr(str, ch);
**    printf("String after a character is %s\n", result);
**    return(0);
** }
*/
