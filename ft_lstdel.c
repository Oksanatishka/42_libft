/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:46:17 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:46:20 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter the adress of a pointer to a link and
** frees the memory of this link and every successors of that link
** using the functions del and free(3). Finally the pointer to
** the link that was just freed must be set to NULL (quite similar
** to the function ft_memdel from the mandatory part).
** Param. #1 The address of a pointer to the first link of a list that needs
** to be freed.
** Return value None.
** Libc functions free(3)
**
**
** First we declare two link structures, one will be a temporary place
** holder and the other will hold the next link in the list.
** We set our temporary link to hold the link pointed to in our parameter,
** alst. We the check to make sure that the function passsed in our
** parameter is not NULL.
**
** If the del function is not NULL we begin our loop in the process of
** deleting our parameter passed link and all the others following it
** in the linked list. We do this by saying loop so long as tmp, which
** is holding the current link, is not equal to NULL, which would mean
** we have reached the end of our list.
**
** We take our current link's element next (the link following it)
** and place it into our link variable next. Separating it from
** the current link. We then run our del function that was passed
** in our parameters and give it as parameters our current link's
** content element and content_size element. Once those are deleted
** we the free the memory that is allocated in our tmp variable.
** We then set our next variable, which currently holds the link
** that should be following the one we just deleted, and put it
** into our tmp variable and start the loop again until we reach
** NULL. Thus ending the loop.
**
** Once our loop is done and everything is deleted we then set the link
** alst to NULL. Effectively deleting the parameter passed link and
** all of those that were following it.
*/

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *next;

	tmp = *alst;
	if (del != NULL)
	{
		while (tmp != NULL)
		{
			next = tmp->next;
			del(tmp->content, tmp->content_size);
			free(tmp);
			tmp = next;
		}
		*alst = NULL;
	}
}
