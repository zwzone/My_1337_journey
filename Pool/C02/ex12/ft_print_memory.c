/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:09:38 by zwina             #+#    #+#             */
/*   Updated: 2021/08/14 08:49:21 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (c >= 32 && c <= 126)
		write(1, &c, 1);
	else
		write(1, ".", 1);
}

void	ft_putaddr(unsigned long long int n)
{
	unsigned long long int	nbr;
	short					i;

	nbr = 1152921504606846976;
	while (nbr > 0)
	{
		i = (short)((n / nbr) % 16);
		if (i < 10)
			ft_putchar(i + '0');
		else if (i < 16)
			ft_putchar(i + 'a' - 10);
		nbr /= 16;
	}
}

void	ft_puthexa(char *c, int k)
{
	if (*c / 16 < 10)
		ft_putchar(*c / 16 + '0');
	else
		ft_putchar(*c / 16 + 'a' - 10);
	if (*c % 16 < 10)
		ft_putchar(*c % 16 + '0');
	else
		ft_putchar(*c % 16 + 'a' - 10);
	if (k % 2 == 1)
		write(1, " ", 1);
}

void	ft_putnstr(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (str[i] && i < n)
	{
		ft_putchar(str[i++]);
	}
	if (!str[i])
		ft_putchar('.');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	j;
	int				i;
	int				k;
	int				s;

	i = -1;
	j = 0;
	while (++i < ((int)(size / 16) + 1))
	{
		ft_putaddr((unsigned long long int)(addr + j));
		write(1, ": ", 2);
		k = -1;
		while (++k < 16 && j < size)
			ft_puthexa((char *)(addr + j++), k);
		s = 0;
		while (s++ < 16 - k)
		{
			write(1, "  ", 2);
			if (s % 2 == 1)
				write(1, " ", 1);
		}
		ft_putnstr((char *)(addr + j - k), k);
		write(1, "\n", 1);
	}
	return (addr);
}
