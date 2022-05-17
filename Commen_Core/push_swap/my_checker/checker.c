/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 10:48:29 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 13:46:19 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "get_next_line/get_next_line.h"

void	ft_checker(t_list **a, t_list **b, char *line)
{
	if (!ft_strncmp(line, "sa\n", 4))
		ft_sa(a, 0);
	else if (!ft_strncmp(line, "sb\n", 4))
		ft_sb(b, 0);
	else if (!ft_strncmp(line, "ss\n", 4))
		ft_ss(a, b, 0);
	else if (!ft_strncmp(line, "pa\n", 4))
		ft_pa(a, b, 0);
	else if (!ft_strncmp(line, "pb\n", 4))
		ft_pb(a, b, 0);
	else if (!ft_strncmp(line, "ra\n", 4))
		ft_ra(a, 0);
	else if (!ft_strncmp(line, "rb\n", 4))
		ft_rb(b, 0);
	else if (!ft_strncmp(line, "rr\n", 4))
		ft_rr(a, b, 0);
	else if (!ft_strncmp(line, "rra\n", 5))
		ft_rra(a, 0);
	else if (!ft_strncmp(line, "rrb\n", 5))
		ft_rrb(b, 0);
	else if (!ft_strncmp(line, "rrr\n", 5))
		ft_rrr(a, b, 0);
	else
		ft_stop(0, 0);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*line;

	if (ac == 1)
		return (0);
	push_swap_check(ac - 1, av + 1);
	stack_a = NULL;
	stack_b = NULL;
	push_swap_setup(ac - 1, av + 1, &stack_a);
	line = get_next_line(0);
	while (line)
	{
		ft_checker(&stack_a, &stack_b, line);
		free(line);
		line = get_next_line(0);
	}
	if (ft_is_sorted(stack_a, 'a') && !stack_b)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}
