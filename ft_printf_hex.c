/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:00:06 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/18 20:14:17 by aprieto-         ###   ########.fr       */
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
