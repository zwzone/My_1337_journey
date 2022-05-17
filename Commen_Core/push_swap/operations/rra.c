/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 09:47:12 by zwina             #+#    #+#             */
/*   Updated: 2021/12/24 08:26:28 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstcutlast(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	while ((*lst)->next->next)
		*lst = (*lst)->next;
	(*lst)->next = NULL;
	*lst = tmp;
}

void	ft_rra(t_list **a, char c)
{
	t_list	*tmp;

	if (ft_lstsize(*a) <= 1)
		return ;
	tmp = ft_lstlast(*a);
	ft_lstcutlast(a);
	ft_lstadd_front(a, tmp);
	if (c)
		ft_putstr_fd("rra\n", 1);
}
