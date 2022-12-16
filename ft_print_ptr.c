/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:24:32 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/15 18:26:51 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(uintptr_t ptr)
{
	int		count;

	count = 0;
	count += ft_putchar("0");
	count += ft_putchar("x");
	count += ft_putptr(ptr);
	if (count < 0)
		return (-1);
	else
		return (count);
}
