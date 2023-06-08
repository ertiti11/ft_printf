/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:04:34 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/08 20:31:19 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putchr(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_pf_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		len += ft_pf_putchr(str[i]);
		i++;
	}
}

void	ft_putp(unsigned long long n, int *len)
{
	ft_pf_putstr("0x", len);
	if (n == 0)
		len += ft_pf_putchr('0');
}

void	ft_printall(char c, va_list args, int *len)
{
	if (c == 'c')
		len += ft_pf_putchr(va_arg(args, int));
	if (c == 's')
		ft_pf_putstr(va_arg(args, char *), len);
	if (c == 'p')
		ft_putp(va_arg(args, unsigned long long), len);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printall(str[++i], args, &len);
		}
		else
			len += ft_pf_putchr(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
