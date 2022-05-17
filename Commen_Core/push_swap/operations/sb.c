/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:50:00 by zwina             #+#    #+#             */
/*   Updated: 2021/12/23 17:47:07 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_list **b, char c)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*b) < 2)
		return ;
	first = *b;
	second = (*b)->next;
	*b = second->next;
	ft_lstadd_front(b, first);
	ft_lstadd_front(b, second);
	if (c)
		ft_putstr_fd("sb\n", 1);
}
