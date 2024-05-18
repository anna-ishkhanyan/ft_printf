/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:34:29 by anishkha          #+#    #+#             */
/*   Updated: 2024/01/27 21:26:33 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int chr)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (char) chr)
			return ((char *) &str[len]);
		len--;
	}
	return (NULL);
}
