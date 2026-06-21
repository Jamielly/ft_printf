/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamsilva <jamsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 19:51:10 by jamsilva          #+#    #+#             */
/*   Updated: 2026/06/10 19:51:10 by jamsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_format(char specifier, va_list ap);
int ft_putnbr_base(long nbr, int base);
int ft_putnbr_base(long nbr, int base);
int ft_print_str(char *str);
int ft_print_char(int	c);

#endif