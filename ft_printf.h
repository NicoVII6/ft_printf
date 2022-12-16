/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:57:25 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/16 17:35:24 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_print_d_i(int nb);
int		ft_print_xup(unsigned int nb);
int		ft_putnbr_hex(unsigned int nb);
int		ft_print_u(unsigned int nb);
int		ft_print_ptr(uintptr_t nb);
int		ft_print_x(unsigned int nb);
int		ft_putnbr_xup(unsigned int nb);
int		ft_putptr(uintptr_t nb);

#endif