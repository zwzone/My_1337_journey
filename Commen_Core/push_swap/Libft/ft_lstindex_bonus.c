/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 12:21:45 by zwina             #+#    #+#             */
/*   Updated: 2021/12/22 18:39:28 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstindex(t_list *lst, int index)
{
	t_list	*first_node;
	int		i;

	first_node = lst;
	i = 0;
	while (i < index)
	{
		if (lst->next)
			lst = lst->next;
		else
			lst = first_node;
		i++;
	}
	return (lst);
}
