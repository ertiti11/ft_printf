/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 09:28:38 by ajordan-          #+#    #+#             */
/*   Updated: 2023/06/12 14:16:17 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_digit_count(long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		count = 1;
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			count++;
		}
		while (nb > 0)
		{
			nb /= 10;
			count++;
		}
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = ft_digit_count(nb);
	str = malloc(i * sizeof(char) + 1);
	if (!(str))
		return (0);
	str[i--] = 0;
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}