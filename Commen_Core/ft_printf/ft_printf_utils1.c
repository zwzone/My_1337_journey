/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 11:12:11 by zwina             #+#    #+#             */
/*   Updated: 2021/11/23 12:12:08 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa_recursive(unsigned long n, char *hexa_digits, int *count)
{
	if (n >= 16)
		ft_puthexa_recursive(n / 16, hexa_digits, count);
	ft_putchar(hexa_digits[(n % 16)], count);
}

void	ft_putptr(unsigned long n, int *count)
{
	char	*hexa_digits;

	hexa_digits = "0123456789abcdef";
	ft_putstr("0x", count);
	ft_puthexa_recursive(n, hexa_digits, count);
}

void	ft_puthexa(unsigned int n, char letter, int *count)
{
	char	*hexa_digits;

	if (letter == 'x')
		hexa_digits = "0123456789abcdef";
	else
		hexa_digits = "0123456789ABCDEF";
	ft_puthexa_recursive(n, hexa_digits, count);
}

void	ft_putnbr_int(int n, int *count)
{
	unsigned int	n_pos;

	if (n < 0)
	{
		n *= -1;
		ft_putchar('-', count);
	}
	n_pos = n;
	if (n_pos >= 10)
		ft_putnbr_int(n_pos / 10, count);
	ft_putchar('0' + (n_pos % 10), count);
}

void	ft_putnbr_uint(unsigned int n, int *count)
{
	if (n >= 10)
		ft_putnbr_uint(n / 10, count);
	ft_putchar('0' + (n % 10), count);
}
