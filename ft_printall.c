/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:08:57 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/11 23:48:24 by aprieto-         ###   ########.fr       */
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
		*len += ft_printnbr(va_arg(args,int));
	
}
