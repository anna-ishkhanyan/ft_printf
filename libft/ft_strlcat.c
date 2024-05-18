/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 21:34:38 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/24 18:20:49 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	i;

	if ((!dest || !src) && !size)
		return (0);
	a = ft_strlen(dest);
	i = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[i] != '\0' && a < size - 1)
	{
		dest[a] = src[i];
		a++;
		i++;
	}
	dest[a] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
