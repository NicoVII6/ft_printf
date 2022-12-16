/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:58:40 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:22:26 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_xup(unsigned int nb)
{
	int		count;

	count = 0;
	if (nb > 16)
	{
		ft_putnbr_xup(nb / 16);
		ft_putnbr_xup(nb % 16);
	}
	else if (nb > 9 && nb < 16)
		count += ft_putchar('A' + (nb - 10));
	else
		count += ft_putchar(nb + '0');
	if (count < 0)
		return (-1);
	return (count);
}
