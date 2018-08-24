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

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
