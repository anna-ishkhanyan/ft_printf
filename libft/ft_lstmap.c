/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:34:10 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/24 16:30:57 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_init_head(t_list	**map_head, t_list **map_tail, t_list *new_node)
{
	if (map_head && !*map_head)
	{
		*map_head = new_node;
		*map_tail = new_node;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map_head;
	t_list	*map_tail;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	map_head = NULL;
	while (lst)
	{
		new_node = ft_lstnew((f)(lst -> content));
		ft_init_head(&map_head, &map_tail, new_node);
		if (!new_node)
		{
			ft_lstclear(&map_head, del);
			break ;
		}
		if (map_tail != new_node)
			ft_lstadd_back(&map_tail, new_node);
		map_tail = new_node;
		lst = lst->next;
	}
	return (map_head);
}
