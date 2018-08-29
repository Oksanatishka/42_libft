/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:35:41 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:35:44 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii -- test for ASCII character
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
**  int main()
**  {
**   	char c, result;
**
**      c = '7';
**    	result = ft_isascii(c);
**      printf("The result is %d\n", result);
**
**      c = 'g';
**    	result = ft_isascii(c);
**      printf("The result is %d\n", result);
**
**      c = '+';
**    	result = ft_isascii(c);
**      printf("The result is %d\n", result);
**
**    	return 0;
**  }
*/
