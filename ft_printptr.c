/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:38:51 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/18 00:48:02 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	len += ft_pf_putstr("0x");
	if (ptr == 0)
	{
		len += ft_putchr('0');
	}
	else
	{
		ft_putp(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}

int	ft_putp(uintptr_t num)
{
	int	len;

	len = 0;
	if (num >= 16)
	{
		len += ft_putp(num / 16);
		len += ft_putp(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			len += ft_putchr(num + '0');
		}
		else
			len += ft_putchr(num - 10 + 'a');
	}
	return (len);
}

int	ft_ptrlen(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}
