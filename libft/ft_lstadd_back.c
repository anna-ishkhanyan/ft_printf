/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:29:07 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/01 19:30:23 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *neww)
{
	t_list	*tab;

	if (!lst || !neww)
		return ;
	if (!(*lst))
	{
		*lst = neww;
		return ;
	}
	tab = *lst;
	while (tab->next)
		tab = tab->next;
	tab->next = neww;
}
