/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:38:03 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/11 19:16:12 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pf_putstr(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;

	while (str[i])
	{
		len += ft_putchr(str[i]);
		i++;
	}
	// devuelve dos despues del 0x 
	return len;
}

int	ft_putchr(char c)
{
	write(1, &c, 1);
	return (1);
}
