/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:58:09 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:58:11 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographical comparison between s1 and s2. If the 2
** strings are identical the function returns 1, or 0 otherwise.
** Param. #1 The first string to be compared.
** Param. #2 The second string to be compared.
** Return value 1 or 0 according to if the 2 strings are identical or not.
** Libc functions None.
*/

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (-1);
	return (ft_strcmp(s1, s2) ? 0 : 1);
}

/*
** int main()
** {
** 	char s1[10] = "String 2.";
** 	char s2[10] = "String 2.";
** 	int result = ft_strequ(s1, s2);
** 	printf("The result is %d\n", result);
** 	return 0;
** }
*/
