/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anishkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 21:50:30 by anishkha          #+#    #+#             */
/*   Updated: 2024/04/15 23:26:17 by anishkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_len_hex(unsigned int nbr);
void	ft_puthex_low(unsigned int nbr);
void	ft_puthex_upper(unsigned int nbr);
int		ft_hexlow(unsigned int nbr);
int		ft_hexupper(unsigned int nbr);
void	ft_putchar(char c);
int		ft_len_pointer(unsigned long nbr);
void	ft_putptr(unsigned long nbr);
int		ft_pointer(unsigned long ptr);
int		ft_uilen(unsigned long long n);
char	*ft_uitoa(unsigned long long n);
int		ft_unsigned(unsigned long long int nbr);
int		ft_char(int c);
int		ft_str(char *str);
void	ft_putstr(char *str);
int		ft_nbr(int nbr);
int		ft_percent(void);
int		ft_formats(va_list args, char format);
int		ft_printf(const char *str, ...);

#endif
