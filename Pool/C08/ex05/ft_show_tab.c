/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:44:11 by zwina             #+#    #+#             */
/*   Updated: 2021/08/21 17:18:43 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_plus;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	nb_plus = nb;
	if (nb_plus > 9)
		ft_putnbr(nb_plus / 10);
	ft_putchar(nb_plus % 10 + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while ((par + i)->str != 0)
	{
		ft_putstr((par + i)->str);
		ft_putchar('\n');
		ft_putnbr((par + i)->size);
		ft_putchar('\n');
		ft_putstr((par + i)->copy);
		ft_putchar('\n');
		i++;
	}
}
