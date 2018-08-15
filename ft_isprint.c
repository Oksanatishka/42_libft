/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:36:04 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:36:12 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isprint -- printing character test (space character inclusive)
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}

/*
** int main()
** {
**  	char c, result;
**
**     c = 'NUL';
**   	result = ft_isprint(c);
**     printf("The result is %d\n", result);
**
**     c = 'g';
**   	result = ft_isprint(c);
**     printf("The result is %d\n", result);
**
**     c = '+';
**   	result = ft_isprint(c);
**     printf("The result is %d\n", result);
**
**   	return 0;
** }
*/
