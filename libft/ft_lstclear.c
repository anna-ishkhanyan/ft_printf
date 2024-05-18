/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:32:12 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/01 21:17:09 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_node;
	}
}
/*int main()
{
	t_list listt = {"string", NULL};
	t_list *list1 = &listt;
	ft_lstclear(&list1, free);
}*/
