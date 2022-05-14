/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:45:16 by zwina             #+#    #+#             */
/*   Updated: 2021/08/14 08:51:00 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hexa(unsigned char c)
{
	if (c / 16 < 10)
		ft_putchar(c / 16 + '0');
	else
		ft_putchar(c / 16 + 'a' - 10);
	if (c % 16 < 10)
		ft_putchar(c % 16 + '0');
	else
		ft_putchar(c % 16 + 'a' - 10);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				i;

	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c >= ' ' && c <= '~')
			ft_putchar(c);
		else
		{
			ft_putchar('\\');
			ft_print_hexa(c);
		}
		i++;
	}
}
