/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:56:00 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:56:02 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output followed by a ’\n’.
** Param. #1 The string to output.
** Return value None.
** Libc functions write(2).
**
**
** This function will display the string s on the standard output followed by a
**'\n', which is a new line.
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

/*
** int main()
** {
** 	char str[20] = "Life is good.";
** 	ft_putendl(str);
** 	return (0);
** }
*/
