/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:19:36 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 13:28:37 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_stop(t_list **ptr1, int *ptr2)
{
	if (ptr1)
		ft_lstclear(ptr1, free);
	if (ptr2)
		free(ptr2);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	push_swap_check(int length, char **arg)
{
	long	n;
	int		i;
	int		j;

	i = 0;
	while (i < length)
	{
		n = ft_atoi(arg[i++]);
		if (n > INT_MAX || n < INT_MIN)
			ft_stop(0, 0);
	}
	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
			if (ft_atoi(arg[i]) == ft_atoi(arg[j++]))
				ft_stop(0, 0);
		i++;
	}
	return (0);
}
