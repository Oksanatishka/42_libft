/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:57:09 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:57:11 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the standard output.
** Param. #1 The string to output.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

/*
** int main () {
**     char letter[20] = "Life if good.";
**     ft_putstr(letter);
**     return(0);
** }
*/
