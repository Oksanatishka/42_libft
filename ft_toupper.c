/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:36:47 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:36:50 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** toupper, toupper_l -- lower case to upper case letter conversion
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
** int main()
** {
** 		char c, result;
**
**      c = 'M';
**  	result = ft_toupper(c);
**      printf("The result is %c\n", result);
**
**      c = 'g';
**  	result = ft_toupper(c);
**      printf("The result is %c\n", result);
**
**      c = '+';
**  	result = ft_toupper(c);
**      printf("The result is %c\n", result);
**
**  	return 0;
** }
*/
