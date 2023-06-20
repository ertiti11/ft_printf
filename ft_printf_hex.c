/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:00:06 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/20 21:12:58 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(char *hexadecimal)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i >= 0)
	{
		if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'Z')
			len += ft_putchr(hexadecimal[i] + 32);
		else
			len += ft_putchr(hexadecimal[i]);
		i--;
	}
	return (len);
}

int	ft_print_hex(int num)
{
	int		len;
	char	hexadecimal[100];
	int		index;
	int		remainder;

	len = 0;
	index = 0;
	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			hexadecimal[index++] = remainder + '0';
		else
			hexadecimal[index++] = remainder + 'A' - 10;
		num /= 16;
	}
	index -= 1;
	len += print_hex(hexadecimal);
	return (len);
}

int	ft_print_hex_mayus(int num)
{
	int		len;
	char	hexadecimal[100];
	int		index;
	int		remainder;

	len = 0;
	index = 0;
	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
			hexadecimal[index++] = remainder + '0';
		else
			hexadecimal[index++] = remainder + 'A' - 10;
		num /= 16;
	}
	index -= 1;
	while (index >= 0)
	{
		len += ft_putchr(hexadecimal[index]);
		index--;
	}
	return (len);
}

int	ft_long_numhex(unsigned int num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (0);
	while (num > 0)
	{
		num = num / 16;
		i++;
	}
	return (i);
}

int	ft_hex_toa(unsigned int num)
{
	size_t	i;
	char	*result;
	char	*base;

	if (num == 0)
	{
		ft_putchr('0');
		return (1);
	}
	base = "0123456789abcdef";
	i = ft_long_numhex(num);
	result = (char *)malloc(sizeof(char) * (i + 1));
	result[i] = 0;
	while (num > 0)
	{
		result[i - 1] = base[num % 16];
		i--;
		num = num / 16;
	}
	free(result);
	return (ft_pf_putstr(result));
}

int	ft_hex_toa_mayus(unsigned int num)
{
	size_t	i;
	char	*result;
	char	*base;

	if (num == 0)
	{
		ft_putchr('0');
		return (1);
	}
	base = "0123456789ABCDEF";
	i = ft_long_numhex(num);
	result = (char *)malloc(sizeof(char) * (i + 1));
	result[i] = 0;
	while (num > 0)
	{
		result[i - 1] = base[num % 16];
		i--;
		num = num / 16;
	}
	free(result);
	return (ft_pf_putstr(result));
}
