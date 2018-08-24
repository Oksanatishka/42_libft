/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:46:03 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:46:04 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes as a parameter a link’s pointer address and frees the
** memory of the link’s content using the function del given as
** a parameter, then frees the link’s memory using free(3). The
** memory of next must not be freed under any circumstance.
** Finally, the pointer to the link that was just freed must be
** set to NULL (quite similar to the function ft_memdel in the
** mandatory part).
** Param. #1 The adress of a pointer to a link that needs to be freed.
** Return value None.
** Libc functions free(3)
**
** First we check to make sure that the parameters that were passed into our
** function are not NULL. If they are not we then run our parameter passed
** function del by giving it's parameters our link alst's content and
** content_size. Once the function has deleted alst's content we the free
** the memory that was allocated to alst and then set it to NULL. Thus
** deleting on link in our list.
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (del != NULL && alst != NULL)
	{
		del((**alst).content, (**alst).content_size);
		free(*alst);
		*alst = NULL;
	}
}
