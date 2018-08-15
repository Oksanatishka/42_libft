/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:37:01 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:37:03 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tolower, tolower_l -- upper case to lower case letter conversion
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*
** int main()
** {
** 	char c, result;
**
**     c = 'M';
** 	result = ft_tolower(c);
**     printf("The result is %c\n", result);
**
**     c = 'g';
** 	result = ft_tolower(c);
**     printf("The result is %c\n", result);
**
**     c = '+';
** 	result = ft_tolower(c);
**     printf("The result is %c\n", result);
**
** 	return 0;
** }
*/
