/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 20:44:18 by zwina             #+#    #+#             */
/*   Updated: 2021/11/23 16:28:35 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_conversion(const char **str, va_list arg, int *count)
{
	if (*(++(*str)) == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (*(*str) == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (*(*str) == 'p')
		ft_putptr(va_arg(arg, unsigned long), count);
	else if (*(*str) == 'd' || *(*str) == 'i')
		ft_putnbr_int(va_arg(arg, int), count);
	else if (*(*str) == 'u')
		ft_putnbr_uint(va_arg(arg, unsigned int), count);
	else if (*(*str) == 'x' || *(*str) == 'X')
		ft_puthexa(va_arg(arg, unsigned int), *(*str), count);
	else if (*(*str) == '%')
		ft_putchar('%', count);
	else
		ft_putchar(*(*str), count);
	(*str)++;
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
			ft_conversion(&(str), arg, &count);
		else
			ft_putchar(*(str++), &count);
	}
	va_end(arg);
	return (count);
}
