/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix_sort_utils.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:53:21 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 13:59:23 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb_0_bit(t_list **a, t_list **b, int bit, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (((*(int *)(*a)->content >> bit) & 1) == 0)
			ft_pb(a, b, 1);
		else
			ft_ra(a, 1);
		i++;
		if (ft_is_sorted(*a, 'a') && ft_is_sorted(*b, 'd'))
			break ;
	}
}

void	pa_1_bit(t_list **a, t_list **b, int bit, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (((*(int *)(*b)->content >> bit) & 1) == 0)
			ft_rb(b, 1);
		else
			ft_pa(a, b, 1);
		i++;
	}
}

void	pa_all(t_list **a, t_list **b)
{
	while (*b)
		ft_pa(a, b, 1);
}
