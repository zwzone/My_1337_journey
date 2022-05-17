/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_my_sort_utils.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 11:14:56 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 14:03:44 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_max(int a, int b, int c)
{
	if (a > b && a > c)
		return (a);
	if (b > a && b > c)
		return (b);
	return (c);
}

int	ft_min(int a, int b, int c)
{
	if (a < b && a < c)
		return (a);
	if (b < a && b < c)
		return (b);
	return (c);
}

void	ft_sort_2(t_list **list)
{
	if (*(int *)(*list)->content > *(int *)(*list)->next->content)
		ft_sa(list, 1);
}

void	ft_sort_3(t_list **a)
{
	if (*(int *)(*a)->content == ft_max(*(int *)(*a)->content,
										*(int *)(*a)->next->content,
										*(int *)ft_lstlast(*a)->content))
		ft_ra(a, 1);
	else if (*(int *)(*a)->next->content == ft_max(*(int *)(*a)->content,
										*(int *)(*a)->next->content,
										*(int *)ft_lstlast(*a)->content))
		ft_rra(a, 1);
	ft_sort_2(a);
}

void	ft_small_to_top(t_list **a, t_list **b)
{
	if (*(int *)(*a)->next->content == ft_min(*(int *)(*a)->content,
										*(int *)(*a)->next->content,
										*(int *)ft_lstlast(*a)->content))
		ft_sa(a, 1);
	else if (*(int *)ft_lstlast(*a)->content == ft_min(*(int *)(*a)->content,
		*(int *)(*a)->next->content,
				*(int *)ft_lstlast(*a)->content))
		ft_rra(a, 1);
	if (!ft_is_sorted(*a, 'a'))
		ft_pb(a, b, 1);
}
