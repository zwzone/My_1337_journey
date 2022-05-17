/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_my_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 10:38:19 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 13:54:24 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_swap_my_sort(t_list **a, t_list **b)
{
	int	size;

	size = ft_lstsize(*a);
	if (size <= 2)
	{
		if (size == 2)
			ft_sort_2(a);
	}
	else
	{
		while (!ft_is_sorted(*a, 'a') && ft_lstsize(*a) > 3)
			ft_small_to_top(a, b);
		if (ft_lstsize(*b) == 2 && \
			*(int *)(*b)->content < *(int *)(*b)->next->content)
			ft_sb(b, 1);
		ft_sort_3(a);
		if (*b)
			ft_pa(a, b, 1);
		ft_sort_2(a);
		if (*b)
			ft_pa(a, b, 1);
		ft_sort_2(a);
	}
}
