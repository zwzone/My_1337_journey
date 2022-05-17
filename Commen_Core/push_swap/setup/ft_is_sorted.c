/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:25:34 by zwina             #+#    #+#             */
/*   Updated: 2021/12/24 16:51:29 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_is_sorted_asc(t_list *lst)
{
	while (lst && lst->next)
	{
		if (*(int *)lst->content > *(int *)lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_is_sorted_desc(t_list *lst)
{
	while (lst && lst->next)
	{
		if (*(int *)lst->content < *(int *)lst->next->content)
			return (0);
		lst = lst->next;
	}
	return (1);
}

int	ft_is_sorted(t_list *lst, char c)
{
	if (c == 'a')
		return (ft_is_sorted_asc(lst));
	else if (c == 'd')
		return (ft_is_sorted_desc(lst));
	else
		return (0);
}
