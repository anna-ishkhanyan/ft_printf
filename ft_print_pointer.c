/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:33:35 by anishkha          #+#    #+#             */
/*   Updated: 2024/04/15 23:52:16 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_len_pointer(unsigned long nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

void	ft_putptr(unsigned long nbr)
{
	if (nbr >= 16)
	{
		ft_putptr(nbr / 16);
		ft_putptr(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar(nbr + '0');
		else
			ft_putchar(nbr - 10 + 'a');
	}
}

int	ft_pointer(unsigned long ptr)
{
	int	len;

	write(1, "0x", 2);
	len = 2;
	if (ptr == 0)
	{
		write(1, "0", 1);
		len++;
	}
	else
	{
		ft_putptr(ptr);
		len += ft_len_pointer(ptr);
	}
	return (len);
}
