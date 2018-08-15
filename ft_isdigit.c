/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:35:16 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:35:18 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isdigit, isnumber -- decimal-digit character test
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

/*
** int main()
** {
**  	char c, result;
**
**     c = '7';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**   	result = ft_isdigit(c);
**     printf("The result is %d\n", result);
**
**   	return 0;
** }
*/
