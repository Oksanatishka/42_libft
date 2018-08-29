/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:56:26 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:56:29 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
** Param. #1 The integer to output.
** Return value None.
** Libc functions write(2).
**
**
** We will be breaking down int number as a whole into individual
** single digit numbers and we will convert those int numbers into characters
** that we will display on the standard output using our ft_putchar function.
**
** We start by seeing if the int passed in parameter is -2147483648. The
** number 2147483648 is the largest number an int variable can possibly
** hold. When a negative sign is placed in front of it our function is not
** able to handle it. So we check to see if a negative version has been
** given and if so we just immediately return it.
**
** If -2147483648 has not been given we then check to see if another
** negative number has been given. If the number is negative we immediately
** use ft_putchar('-') to display the minus sign to the standard output.
**
** We check to see if the number is greater than or equal to 10. If it
** is we begin to break down the number recursively to each individual
** digit, where we will then convert it into a character. We use a + '0'
** to convert the number into a char value.
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

/*
** int main()
** {
** 	int nmb = 432;
** 	ft_putnbr(nmb);
** 	return (0);
** }
*/
