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
** Allocates (with malloc(3)) and returns a “fresh” string ending
** with ’\0’. Each character of the string is initialized at
** ’\0’. If the allocation fails the function returns NULL.
** Param. #1 The size of the string to be allocated.
** Return value The string allocated and initialized to 0.
** Libc functions malloc(3)
**
**
** we have to add + 1 to our size_t to compensate for the terminating '\0'.
*/

#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *tmp;

	tmp = (char *)s;
	while (n > 0)
	{
		*tmp = 0;
		tmp++;
		n--;
	}
	return;
}

void *ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

char *ft_strnew(size_t size)
{
	return ((char *)ft_memalloc(size + 1));
}

int main()
{
	char *result = ft_strnew(5);
	printf("The result is %s\n", result);
	return 0;
}