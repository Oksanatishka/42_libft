/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obibik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 17:45:49 by obibik            #+#    #+#             */
/*   Updated: 2018/08/22 17:45:52 by obibik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description Allocates (with malloc(3)) and returns a “fresh” link. The
** variables content and content_size of the new link are initialized
** by copy of the parameters of the function. If the parameter
** content is nul, the variable content is initialized to
** NULL and the variable content_size is initialized to 0 even
** if the parameter content_size isn’t. The variable next is
** initialized to NULL. If the allocation fails, the function returns
** NULL.
** Param. #1 The content to put in the new link.
** Param. #2 The size of the content of the new link.
** Return value The new link.
** Libc functions malloc(3), free(3)
**
**
** We first declare a new t_list structure called 'new'
** We then proceed to allocate the memory required for the stucture to exist
** In the event that the memory allocation failed we return NULL
**
** If the parameter of content is NULL we set the content element to NULL
** and the content_size element to 0 regardless of the parameter given
**
** If the above is not the case we move on. We allocate memory for our new
** linked list's element content by using our parameter of content_size.
** If the allocation fails for this we return NULL. If it works we use our
** ft_memmove function to move the data from our parameters into our linked
** new's content element. And last we set our link new's content_size to
** our parameter content_size
**
** Last we set our new link list new's next element to NULL so that we know
** that we are at the end of the list. We then return our new link.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

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
