/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamsilva <jamsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 19:28:52 by jamsilva          #+#    #+#             */
/*   Updated: 2026/06/10 19:28:52 by jamsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base(va_arg(ap, int), 10, "0123456789");
	else if (specifier == 'x')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 16, "0123456789abcdef");
	else if (specifier == 'X')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 16, "0123456789ABCDEF");
	else if (specifier == 'u')
		count += ft_putnbr_base(va_arg(ap, unsigned int), 10, "0123456789");
	else if (specifier == 'p')
	{
		unsigned long long ptr = (unsigned long long)va_arg(ap, void *);
		count += write(1, "0x", 2);
		count += ft_putnbr_base(ptr, 16, "0123456789abcdef");
	}
	else if (specifier == '%')
		count += ft_print_char('%');
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int	count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		++format;
	}
	va_end(ap);
	return (count);
}
