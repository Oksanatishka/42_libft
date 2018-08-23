/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:59:44 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:59:47 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’. Each character of the string is initialized at
** ’\0’. If the allocation fails the function returns NULL.
** Param. #1 The size of the string to be allocated.
** Return value The string allocated and initialized to 0.
** Libc functions malloc(3)
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = ft_memalloc(size + 1);
	if (str == NULL)
		return (0);
	else
	{
		ft_bzero(str, size + 1);
		return (str);
	}
}