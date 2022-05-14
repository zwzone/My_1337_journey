/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 09:31:56 by zwina             #+#    #+#             */
/*   Updated: 2021/08/14 15:29:38 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (tab[i] >= tab[i + 1])
			return ;
		i++;
	}
	i = 0;
	while (i < n)
		ft_putchar(tab[i++] + '0');
	if (tab[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	i;

	if (!(n > 0 && n < 10))
		return ;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	while (tab[0] <= 10 - n)
	{
		ft_print(tab, n);
		tab[n - 1]++;
		i = 1;
		while (tab[n - i] == 10 && n > 1)
		{
			tab[n - i] = 0;
			tab[n - i - 1]++;
			i++;
		}
	}
}
