/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:55:36 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:55:38 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the character c to the standard output.
** Param. #1 The character to output.
** Return value None.
** Libc functions write(2).
**
**
** This function that writes a single character to the standard output stream of
** the terminal.
** The first parameter in the write function is the fd of where to
** write the output. You can either use a file descriptor obtained from the
** open system call, or you can use 0, 1, or 2, to refer to the standard input,
** standard output, or standard error, respectively.
*/

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** int main () {
**     char letter = 'A';
**     ft_putchar(letter);
**     return(0);
** }
*/
