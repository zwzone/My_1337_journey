/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:11:44 by zwina             #+#    #+#             */
/*   Updated: 2021/08/22 10:30:15 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	or_min;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof (int) * (max - min));
	if (!(*range))
		return (-1);
	or_min = min;
	i = 0;
	while (min < max)
		(*range)[i++] = min++;
	return (max - or_min);
}
