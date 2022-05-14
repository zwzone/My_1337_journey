/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:01:07 by zwina             #+#    #+#             */
/*   Updated: 2021/08/16 10:35:32 by zwina            ###   ########.fr       */
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
	unsigned int	ten;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	nb_plus = (unsigned int)nb;
	ten = 1;
	while (nb_plus / ten >= 10)
		ten *= 10;
	while (ten > 0)
	{
		ft_putchar(((nb_plus / ten) % 10) + '0');
		ten /= 10;
	}
}
