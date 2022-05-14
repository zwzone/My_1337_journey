/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:20:59 by zwina             #+#    #+#             */
/*   Updated: 2021/08/25 16:25:30 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*res_tab;

	res_tab = (int *)malloc(sizeof (int) * length);
	if (!res_tab)
		return (0);
	i = 0;
	while (i < length)
	{
		res_tab[i] = f(tab[i]);
		i++;
	}
	return (res_tab);
}
