/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:38:51 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/09 14:57:17 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(unsigned long long ptr, int *len)
{
	ft_pf_putstr("0x", len);
	if (ptr == 0)
	{
		len+=ft_putchr('0');
	}
	else
	{
		ft_putp(ptr);
        len += ft_ptrlen(ptr);
	}
	len += 1;
}

void	ft_putp(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putp(num / 16);
		ft_putp(num % 16);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchr(num + '0');
		}
		else
			ft_putchr(num - 10 + 'a');
	}
}

int	ft_ptrlen(uintptr_t ptr)
{
	int len;
	len = 0;
	while (ptr != 0)
	{
		len++;
		ptr = ptr / 16;
	}
	return (len);
}