/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:23:43 by anishkha          #+#    #+#             */
/*   Updated: 2024/01/27 21:10:20 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *) ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) x;
		i++;
	}
	return (ptr);
}
