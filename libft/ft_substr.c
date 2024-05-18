/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 20:30:40 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/24 18:06:04 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	length;
	size_t	i;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		length = ft_strlen(s);
	else
		length = len;
	tab = (char *)malloc((length + 1) * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[i + start])
	{
		tab[i] = s[start + i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
