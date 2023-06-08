/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprieto- <aprieto-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:03:39 by aprieto-          #+#    #+#             */
/*   Updated: 2023/06/08 20:29:11 by aprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_pf_putchr(char c);
void	ft_printall(char c, va_list arg, int *len);
void	ft_pf_putstr(char *str, int *len);

#endif