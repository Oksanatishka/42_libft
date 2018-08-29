/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:52:24 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:54:51 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** itoa converts integer to string
** Allocate (with malloc(3)) and returns a “fresh” string ending
** with ’\0’ representing the integer n given as argument.
** Negative numbers must be supported. If the allocation fails,
** the function returns NULL.
**
** Param. #1 The integer to be transformed into a string.
**
** Return value: The string representing the integer passed as argument.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_itoa(int nbr)
{
	int		length;
	int		sign;
	char	*str;

	sign = nbr;
	length = 1;
	while (sign /= 10)
		length++;
	sign = nbr < 0 ? 1 : 0;
	length = nbr < 0 ? length += 1 : length;
	if (nbr == -2147483648)
		return (str = ft_strdup("-2147483648"));
	str = ft_strnew(length);
	if (!str)
		return (NULL);
	if (sign)
		str[0] = '-';
	nbr = nbr < 0 ? nbr *= -1 : nbr;
	while (--length >= sign)
	{
		str[length] = (nbr >= 10) ? (nbr % 10) + 48 : nbr + 48;
		nbr /= 10;
	}
	str[ft_strlen(str)] = '\0';
	return (str);
}

/*
** int main()
** {
** 	int nmb = 89;
** 	char *val = ft_itoa(nmb);
** 	printf("This is number %d\n", nmb);
** 	printf("This is string %s\n", val);
** 	return 0;
** }
*/
