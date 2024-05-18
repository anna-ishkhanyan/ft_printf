/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_printf_ui.c									 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anishkha <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/04/14 18:18:01 by anishkha		  #+#	#+#			 */
/*   Updated: 2024/04/15 23:51:23 by anishkha         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uilen(unsigned long long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned long long nbr)
{
	int				len;
	char			*str;

	len = 0;
	len = len + ft_uilen(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	while (len--)
	{
		*(str + len) = '0' + nbr % 10;
		nbr /= 10;
	}
	return (str);
}

int	ft_unsigned(unsigned long long nbr)
{
	char	*str;
	int		len;

	str = ft_uitoa(nbr);
	ft_putstr(str);
	len = ft_strlen(str);
	free (str);
	return (len);
}
