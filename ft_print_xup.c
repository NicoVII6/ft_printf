/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:21:34 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:22:31 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int nb)
{
	int		count;

	count = 0;
	count += write(1, "0", 1);
	count += write(1, "x", 1);
	count += ft_putnbr_xup(nb);
	if (count < 0)
		return (-1);
	else
		return (count);
}
