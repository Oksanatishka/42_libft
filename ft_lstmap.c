/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:47:02 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:47:05 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the successive
** applications of f. If the allocation fails, the function
** returns NULL.
** Param. #1 A pointer’s to the first link of a list.
** Param. #2 The address of a function to apply to each link of a list.
** Return value The new list.
** Libc functions malloc(3), free(3).
**
**
** Above we created a new t_list structure variable newlist.
** We then make sure that both the list passed as well as the function f
** arenot NULL. If they are we will return NULL. If not we will run the
** function f on the link lst and set it into our newlist link variable.
** NOTE: We are to assume that the function f allocates memory for our
** newlist variable based on the data of lst. We then check if newlist is
** null as well as if the link lst's element next is NULL. If neither are
** NULL we set our newlist element next equal to the ft_lstmap function
** which has been passed lst's element next (the link following it) as
** well as the function f. This allows us to recursively apply the function
** f to all of the links and allows us to allocate memory based on how many
** indiviual links we have in our list. Once lst->next becomes equal to NULL
** this will break us out of the recursion and have us return the newlist.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;

	if (lst != NULL && f != NULL)
	{
		newlist = f(lst);
		if (newlist != NULL && lst->next != NULL)
			newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (NULL);
}
