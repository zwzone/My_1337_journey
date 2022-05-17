/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 09:10:35 by zwina             #+#    #+#             */
/*   Updated: 2021/12/24 14:04:41 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	if (ac == 1)
		return (0);
	push_swap_check(ac - 1, av + 1);
	stack_a = NULL;
	stack_b = NULL;
	push_swap_setup(ac - 1, av + 1, &stack_a);
	size = ft_lstsize(stack_a);
	if (size <= 5)
		ft_push_swap_my_sort(&stack_a, &stack_b);
	else
		ft_push_swap_radix_sort(&stack_a, &stack_b);
	return (0);
}
