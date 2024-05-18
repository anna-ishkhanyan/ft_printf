/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:08:51 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/24 16:12:47 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*p;

	if (nitems && size && nitems > (UINT_MAX / size))
		return (NULL);
	p = malloc(nitems * size);
	if (!p)
		return (NULL);
	ft_bzero(p, nitems * size);
	return (p);
}
