/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 21:12:26 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/24 18:07:26 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*tab;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	tab = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, len1);
	ft_strlcat(tab, s2, len1 + len2);
	return (tab);
}
