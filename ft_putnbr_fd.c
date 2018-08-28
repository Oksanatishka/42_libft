/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:56:57 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:56:59 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Outputs the integer n to the file descriptor fd.
** Param. #1 The integer to print.
** Param. #2 The file descriptor.
** Return value None.
** Libc functions write(2).
*/

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
void ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

int main()
{
	int nmb = 432;
	ft_putnbr_fd(nmb, 1);
	return (0);
}