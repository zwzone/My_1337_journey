/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:36:52 by zwina             #+#    #+#             */
/*   Updated: 2021/08/16 17:39:01 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i + 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_plus;
	unsigned int	bs;
	unsigned int	ten;

	bs = ft_base(base);
	if (!bs)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	nbr_plus = (unsigned int)nbr;
	ten = 1;
	while (nbr_plus / ten >= bs)
		ten *= bs;
	while (ten > 0)
	{
		ft_putchar(base[((nbr_plus / ten) % bs)]);
		ten /= bs;
	}
}
