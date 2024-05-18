/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 20:03:13 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/01 19:58:10 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	if (!dst || !src)
		return (0);
	p1 = (unsigned char *) dst;
	p2 = (unsigned char *) src;
	i = 0;
	if (p1 > p2)
	{
		while (len-- > 0)
			p1[len] = p2[len];
	}
	else
	{
		while (i < len)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (dst);
}
