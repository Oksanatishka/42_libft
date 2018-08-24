/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:29:50 by obibik            #+#    #+#             */
/*   Updated: 2018/08/14 17:30:00 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlen, strnlen -- find length of string
**
** We use a size_t because it is guaranteed to be big enough to contain
** the size of the biggest object your system can handle. This way we can
** display the absolute biggest string that our computer can handle.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
** int main()
** {
** 	char str[] = "Life is good.";
** 	int result = ft_strlen(str);
** 	printf("The length of the string is %d.\n", result);
** 	return 0;
** }
*/
