/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 20:34:55 by anishkha          #+#    #+#             */
/*   Updated: 2024/04/15 23:52:11 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_hex(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

void	ft_puthex_low(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_puthex_low(nbr / 16);
		ft_puthex_low(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
			ft_putchar(nbr - 10 + 'a');
	}
}

void	ft_puthex_upper(unsigned int nbr)
{
	if (nbr >= 16)
	{
		ft_puthex_upper(nbr / 16);
		ft_puthex_upper(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
			ft_putchar(nbr - 10 + 'A');
	}
}

int	ft_hexlow(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		write (1, "0", 1);
		len++;
	}
	else
	{
		len = ft_len_hex(nbr);
		ft_puthex_low(nbr);
	}
	return (len);
}

int	ft_hexupper(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
	{
		write (1, "0", 1);
		len++;
	}
	else
	{
		len = ft_len_hex(nbr);
		ft_puthex_upper(nbr);
	}
	return (len);
}
