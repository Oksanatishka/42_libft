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
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	while (s != '\0' && *s)
		*s++ = '\0';
}