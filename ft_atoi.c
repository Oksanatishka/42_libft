/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:34:48 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:34:50 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** atoi, atoi_l -- convert ASCII string to integer
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
** int main()
** {
**     char str[] = "-i89789";
**     int val = ft_atoi(str);
**     printf ("%d ", val);
**     return 0;
** }
*/
