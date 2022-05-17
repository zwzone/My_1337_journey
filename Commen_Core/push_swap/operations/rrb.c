/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:48:00 by zwina             #+#    #+#             */
/*   Updated: 2021/12/24 08:26:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_list **b, char c)
{
	t_list	*tmp;

	if (ft_lstsize(*b) <= 1)
		return ;
	tmp = ft_lstlast(*b);
	ft_lstcutlast(b);
	ft_lstadd_front(b, tmp);
	if (c)
		ft_putstr_fd("rrb\n", 1);
}
