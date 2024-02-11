/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanz-ra <asanz-ra@42madrid.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 15:47:21 by asanz-ra          #+#    #+#             */
/*   Updated: 2024/02/11 16:12:14 by asanz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (lst == 0 || f == 0 || del == 0)
		return ((t_list *) 0);
	new_lst = (t_list *) 0;
	while (lst != 0)
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (new_node == 0)
		{
			ft_lstclear(&new_lst, del);
			return ((t_list *) 0);
		}
		ft_lstadd_back(&new_lst, new_node);
		new_node = new_node->next;
		lst = lst->next;
	}
	return (new_lst);
}
