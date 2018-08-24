/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:46:46 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:46:49 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Iterates the list lst and applies the function f to each link.
** Param. #1 A pointer to the first link of a list.
** Param. #2 The address of a function to apply to each link of a list.
** Return value None.
** Libc functions None
**
**
** First we check to make sure our parameter of function f is not NULL.
** If it is not NULL we start our loop through our linked list applying
** function f to each link. Once it has been applied we set the current
** link to be it's element next, setting it to the following link and
** then starting the loop over again until we reach the end by hitting
** NULL.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (f != NULL)
	{
		while (lst != NULL)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
