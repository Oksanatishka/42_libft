/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:57:40 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:57:43 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Sets every character of the string to the value ’\0’.
** Param. #1 The string that needs to be cleared.
** Return value None.
** Libc functions None.
**
**
** This function assigns the value '\0' to all the characters in a chain that
** is passed to it's parameter. This sounds similar to the ft_bzero function but
** we are changing the value of existing characters to '\0' to clear the
** existing string rather than putting '\0' to placehold in a newly allocated
** memory zone
**
** We use unsigned int to be able to have the unsigned int's ability to have
** a further positive reach than a regular int in case our string is
** incredibly long. It will be our counter.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
