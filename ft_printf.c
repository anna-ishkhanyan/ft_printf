/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:32:57 by anishkha          #+#    #+#             */
/*   Updated: 2024/04/15 23:52:27 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, char format)
{
	int	len;

	len = 0;
	if (format == 'x')
		len = len + ft_hexlow(va_arg(args, unsigned int));
	if (format == 'i' || format == 'd')
		len = len + ft_nbr(va_arg(args, int));
	if (format == 'X')
		len = len + ft_hexupper(va_arg(args, unsigned int));
	if (format == 'p')
		len = len + ft_pointer(va_arg(args, unsigned long));
	if (format == 'u')
		len = len + ft_unsigned(va_arg(args, unsigned int));
	if (format == 'c')
		len = len + ft_char(va_arg(args, int));
	if (format == 's')
		len = len + ft_str(va_arg(args, char *));
	if (format == '%')
		len = len + ft_percent();
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len = len + ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len = len + ft_char(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
