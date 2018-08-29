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

/*
** int main()
** {
** 	t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
** 	char content[20] = "CONTENT.";
** 	t_list *linked_list_item1 = ft_lstnew((void *)content, 16);
** 	char content2[20] = "CONTENT2.";
** 	t_list *linked_list_item2 = ft_lstnew((void *)content2, 16);
** 	ft_lstadd(&my_tlist, linked_list_item1);
** 	ft_lstadd(&my_tlist, linked_list_item2);
** 	printf("The result is %s\n", (char *)my_tlist[0].content);
** 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
** 	return 0;
** }
*/
