/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:30:12 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:30:15 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strdup, strndup -- save a copy of a string
*/

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dup = (char *)malloc(i + 1);
	if (dup == NULL)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
** int main()
** {
**     char str[] = "GeeksForGeeks";
**     char* result = ft_strdup(str);
**     printf("%s", result);
**     return 0;
** }
*/
