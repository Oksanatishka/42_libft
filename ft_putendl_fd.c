/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:56:14 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:56:17 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the string s to the file descriptor fd followed by a
** ’\n’.
** Param. #1 The string to output.
** Param. #2 The file descriptor.
** Return value None.
** Libc functions write(2).
**
**
** This function writes the string s to the file descriptor fd followed by a
** '\n' to make a new line.
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
** int main()
** {
** 	char str[20] = "Life is good.";
** 	ft_putendl_fd(str, 1);
** 	return (0);
** }
*/
