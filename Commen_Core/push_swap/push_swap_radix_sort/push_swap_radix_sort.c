/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_radix_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 08:30:47 by zwina             #+#    #+#             */
/*   Updated: 2021/12/24 16:33:15 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap_radix_sort(t_list **a, t_list **b)
{
	int	bit;

	bit = 0;
	while (!ft_is_sorted(*a, 'a') || *b)
	{
		pb_0_bit(a, b, bit, ft_lstsize(*a));
		bit++;
		if (ft_is_sorted(*a, 'a'))
			pa_all(a, b);
		pa_1_bit(a, b, bit, ft_lstsize(*b));
	}
}
