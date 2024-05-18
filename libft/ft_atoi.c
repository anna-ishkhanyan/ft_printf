/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 19:57:17 by anishkha          #+#    #+#             */
/*   Updated: 2024/02/01 20:17:32 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;
	int	i;

	sign = 1;
	i = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10;
		num = num + (str[i] - '0');
		i++;
	}
	num = num * sign;
	return (num);
}
