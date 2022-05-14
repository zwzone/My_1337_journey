/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:49:01 by zwina             #+#    #+#             */
/*   Updated: 2021/08/13 10:56:52 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_plus;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	nb_plus = nb;
	if (nb_plus >= 0 && nb_plus <= 9)
		ft_putchar(nb_plus + '0');
	else
	{
		ft_putnbr(nb_plus / 10);
		ft_putnbr(nb_plus % 10);
	}
}
