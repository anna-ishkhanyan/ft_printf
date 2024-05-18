/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:48:46 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/24 17:47:55 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!dest && !src)
		return (NULL);
	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	while (n > 0)
	{
		*p1 = *p2;
		n--;
		p1++;
		p2++;
	}
	return (dest);
}
