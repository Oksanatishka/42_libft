/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:33:14 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:33:16 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strchr, strrchr -- locate character in string
** The strchr() function locates the first occurrence of c (converted to a char)
** in the string pointed to by s.  The terminating null character is considered
** to be part of the string; therefore if c is `\0',
** the functions locate the terminating `\0'.
** The functions strchr() and strrchr() return a pointer to the located
** character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s++)
			return (0);
	}
	return (char *)s;
}

/*
** int main () {
**    const char str[] = "http://www.tutorialspoint.com";
**    const char ch = 'f';
**    char *result;
**
**    result = ft_strchr(str, ch);
**    printf("String after a character is %s\n", result);
**    return(0);
** }
*/
