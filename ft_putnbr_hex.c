/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:57:29 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:22:21 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* la fonction putnbr recoit un nombre entier sous forme decimal, le read et le
convertit en un nombre hexadecimal (sans 0x pour l'instant) et le renvoie sous la
forme chaine de caracteres */
int	ft_putnbr_hex(unsigned int nb)
{
	int		count;

	count = 0;
	if (nb > 16)
	{
		ft_putnbr_hex(nb / 16);
		ft_putnbr_hex(nb % 16);
	}
	else if (nb > 9 && nb < 16)
		count += ft_putchar('a' + (nb - 10))
	else
		count += ft_putchar('0' + nb);
	if (count < 0)
		return (-1);
	return (count);
}
