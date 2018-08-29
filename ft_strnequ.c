/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:59:34 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:59:36 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Lexicographical comparison between s1 and s2 up to n characters
** or until a ’\0’ is reached. If the 2 strings are identical,
** the function returns 1, or 0 otherwise.
** Param. #1 The first string to be compared.
** Param. #2 The second string to be compared.
** Param. #3 The maximum number of characters to be compared.
** Return value 1 or 0 according to if the 2 strings are identical or not.
** Libc functions None.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (-1);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}

/*
** int main()
** {
** 	char s1[20] = "String 22222.";
** 	char s2[10] = "String 2.";
** 	int result = ft_strnequ(s1, s2, 3);
** 	printf("The result is %d\n", result);
** 	return 0;
** }
*/
