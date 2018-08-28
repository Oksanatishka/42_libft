/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:00:33 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:00:34 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a copy of the string
** given as argument without whitespaces at the beginning or at
** the end of the string. Will be considered as whitespaces the
** following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
** at the beginning or at the end, the function returns a
** copy of s. If the allocation fails the function returns NULL.
** Param. #1 The string to be trimed.
** Return value The “fresh” trimmed string or a copy of s.
** Libc functions malloc(3)
*/
#include <stdio.h>
#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return (dst);
}

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

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

char *ft_strtrim(char const *s)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));
	j = ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (!(str = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

int main()
{
	char s[30] = " \t\nThis is string. \tContinue.";
	char *result = ft_strtrim(s);
	printf("The result is %s\n", result);
	return 0;
}
