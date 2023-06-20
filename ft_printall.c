/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:08:57 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/20 16:32:40 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printall(char c, va_list args, int *len)
{
	if (c == 'c')
		*len += ft_putchr(va_arg(args, int));
	if (c == 's')
		*len += ft_pf_putstr(va_arg(args, char *));
	if (c == 'p')
		*len += ft_printptr(va_arg(args, unsigned long long));
	if (c == 'd')
		*len += ft_printnbr(va_arg(args, int));
	if (c == 'i')
		*len += ft_printnbr(va_arg(args, int));
	if (c == 'u')
		*len += print_unsigned(va_arg(args, int));
	if (c == 'x')
		*len += ft_print_hex(va_arg(args, int));
	if (c == 'X')
		*len += ft_print_hex_mayus(va_arg(args, int));
	if (c == '%')
		*len += ft_putchr('%');
}
