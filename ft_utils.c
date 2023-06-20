/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:38:03 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/20 16:31:36 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_putstr(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (str == NULL)
	{
		ft_pf_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		len += ft_putchr(str[i]);
		i++;
	}
	return (len);
}

int	ft_putchr(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printnbr(int num)
{
	return (ft_pf_putstr(ft_itoa(num)));
}

int	print_unsigned(int num)
{
	unsigned int numero;
	numero = num;
	
	
	return (ft_pf_putstr(ft_itoa(num)));
}