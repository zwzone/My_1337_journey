/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:49:13 by zwina             #+#    #+#             */
/*   Updated: 2021/12/23 17:46:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_list **a, char c)
{
	t_list	*first;
	t_list	*second;

	if (ft_lstsize(*a) < 2)
		return ;
	first = *a;
	second = (*a)->next;
	*a = second->next;
	ft_lstadd_front(a, first);
	ft_lstadd_front(a, second);
	if (c)
		ft_putstr_fd("sa\n", 1);
}
