/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:55:03 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 16:55:05 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a “fresh” memory
** area. The memory allocated is initialized to 0. If the allocation
** fails, the function returns NULL.
** Param. #1 The size of the memory that needs to be allocated.
** Return value The allocated memory area.
** Libc functions malloc(3)
**
**
** We use malloc to allocate memory to our m variable based on the size
** given in the parameter. If the allocation fails we return NULL. Otherwise
** we then run the function ft_bzero on our allocated zone of memory m and
** give it our size parameter. We then return our void variable m.
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

int main()
{
	char *result = ft_memalloc(5);
	printf("The result is %s\n", result);
	return 0;
}
