/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@42malaga.student.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:03:39 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/09 14:57:28 by aprieto-         ###   ########.fr       */
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
void	ft_printall(char c, va_list arg, int *len);
void	ft_pf_putstr(char *str, int *len);
int		ft_printptr(unsigned long long ptr, int *len);
void	ft_putp(uintptr_t num);
int	ft_ptrlen(uintptr_t ptr);
#endif