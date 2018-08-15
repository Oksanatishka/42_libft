/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:35:01 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:35:03 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalpha -- alphabetic character test
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 & c <= 122))
		return (1);
	else
		return (0);
}

/*
** int main()
** {
** 	char c, result;
**
**     c = '*';
**  	result = ft_isalpha(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**  	result = ft_isalpha(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**  	result = ft_isalpha(c);
**     printf("The result is %d\n", result);
**
**  	return 0;
** }
*/
