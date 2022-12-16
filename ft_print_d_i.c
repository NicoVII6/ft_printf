/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:01:45 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:11:13 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_d_i(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		count += ft_putstr("-2147483648");
	}
	else if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = ft_print_d_i(-nb);
	}
	else if (nb > 9)
	{
		ft_print_d_i(nb % 10);
		ft_print_d_i(nb / 10);
	}
	else
		count += ft_putchar(nb + 48);
	return (count);
}
