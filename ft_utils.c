/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:38:03 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/09 14:38:26 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pf_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	while (str[i])
	{
		len += ft_putchr(str[i]);
		i++;
	}
}

int	ft_putchr(char c)
{
	write(1, &c, 1);
	return (1);
}
