/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:28 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/15 17:42:00 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* la fonction prends en parametre an unsigned integer type that is
capable of storing a data pointer (so an address) 
we fix a pointer to an hexadecimal base and when the moment
of the writing comes, we index the number value to the corresponding
value into that base */

int	ft_putptr(uintptr_t nb)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		ft_putptr(nb % 16);
		ft_putptr(nb / 16);
	}
	else
		count += ft_putchar(base[nb]);
	if (count < 0)
		return (-1);
	return (count);
}
