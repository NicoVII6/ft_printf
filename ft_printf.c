/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 11:13:45 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:34:43 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_specifier(const char *format, va_list args, int i);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			count += ft_putchar(format[i]);
			if (count < 0)
				return (-1);
		}
		else if (format[i] == '%')
		{
			count += ft_check_specifier(format, args, ++i);
			if (count < 0)
				return (-1);
		}
		i++;
	}
	va_ends(args);
	return (count);
}

int	ft_check_specifier(const char *format, va_list args, int i)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_putchar((char) va_arg(args, int));
	else if (format[i] == 's')
		count += ft_putstr((char *) va_arg(args, char *));
	else if (format[i] == 'd' || format[i] == 'i')
		count += ft_print_d_i((int) va_arg(args, int));
	else if (format[i] == 'u')
		count += ft_print_u((unsigned int) va_arg(args, unsigned int));
	else if (format[i] == 'x')
		count += ft_print_x((unsigned int) va_arg(args, unsigned int));
	else if (format[i] == 'X')
		count += ft_print_xup((unsigned int) va_arg(args, unsigned int));
	else if (format[i] == 'p')
		count += ft_print_ptr((uintptr_t) va_arg(args, uintptr_t));
	else if (format[i] == '%')
		count += ft_print_char('%');
	return (count);
}
