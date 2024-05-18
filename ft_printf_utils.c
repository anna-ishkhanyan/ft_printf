/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:38:25 by anishkha          #+#    #+#             */
/*   Updated: 2024/04/15 23:52:22 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	len = ft_strlen(str);
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int	ft_nbr(int nbr)
{
	int		len;
	char	*str;

	str = ft_itoa(nbr);
	len = ft_str(str);
	free(str);
	return (len);
}

int	ft_percent(void)
{
	ft_char('%');
	return (1);
}
