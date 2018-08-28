/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:46:32 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:46:35 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds the element new at the beginning of the list.
** Param. #1 The address of a pointer to the first link of a list.
** Param. #2 The link to add at the beginning of the list.
** Return value None.
** Libc functions None.
**
**
** In this function we will be adding a new link, called 'new' that is passed
** in our parameters, to a list and placing this link at the head of our list.
**
** First we check to make sure the link new that is passed to our parameters
** is NULL. If it is not, we set our link new's element next to the first
** link that is pointed to by alst in our parameters. We then set the
** pointer of alst to new, thus setting it to the head of our linked list.
*/
#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;
	size_t i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d == s)
		return (d);
	if (s < d)
	{
		i = len;
		while (i--)
			((char *)d)[i] = ((char *)s)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((char *)d)[i] = ((char *)s)[i];
			i++;
		}
	}
	return (d);
}

t_list *ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

void ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}

int main()
{
	t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
	char content[20] = "CONTENT.";
	t_list *linked_list_item1 = ft_lstnew((void *)content, 16);
	char content2[20] = "CONTENT2.";
	t_list *linked_list_item2 = ft_lstnew((void *)content2, 16);
	ft_lstadd(&my_tlist, linked_list_item1);
	ft_lstadd(&my_tlist, linked_list_item2);
	printf("The result is %s\n", (char *)my_tlist[0].content);
	printf("The result is %s\n", (char *)my_tlist[0].next->content);
	return 0;
}