/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:35:29 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:35:31 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalnum -- alphanumeric character test
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**  	result = ft_isalnum(c);
**     printf("The result is %d\n", result);
**
**  	return 0;
** }
*/
