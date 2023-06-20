/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:03:39 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/20 16:31:58 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_putchr(char c);
char	*ft_itoa(int n);
void	ft_printall(char c, va_list arg, int *len);
int		ft_pf_putstr(char *str);
int		ft_printnbr(int num);
int		print_unsigned(int num);
int		ft_print_hex(int num);
int		ft_printptr(unsigned long long ptr);
int		ft_putp(uintptr_t num);
int		ft_ptrlen(uintptr_t ptr);
int		ft_print_hex_mayus(int num);
#endif