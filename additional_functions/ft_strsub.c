/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:00:22 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:00:24 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Allocates (with malloc(3)) and returns a “fresh” substring
** from the string given as argument. The substring begins at
** indexstart and is of size len. If start and len aren’t refering
** to a valid substring, the behavior is undefined. If the
** allocation fails, the function returns NULL.
** Param. #1 The string from which create the substring.
** Param. #2 The start index of the substring.
** Param. #3 The size of the substring.
** Return value The substring.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (start--)
		s++;
	ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}