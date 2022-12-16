/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:58 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:14:10 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		ft_putnbr_u(nb % 10);
		ft_putnbr_u(nb / 10);
	}
	else
		count += ft_putchar(nb + '0');
	if (count < 0)
		return (-1);
	return (count);
}
