/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:05:47 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 13:30:59 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./Libft/libft.h"

/*PRINT*/
void	print_stacks(t_list *a, t_list *b);

/*---Setup-------*/
int		push_swap_check(int length, char **arg);
void	push_swap_setup(int length, char **arg, t_list **a);
void	ft_stop(t_list **ptr1, int *ptr2);
int		ft_min(int a, int b, int c);
int		ft_max(int a, int b, int c);
int		ft_is_sorted(t_list *lst, char c);

/*-SORTING--*/
///my_sort
void	ft_push_swap_my_sort(t_list **a, t_list **b);
void	ft_sort_2(t_list **list);
void	ft_sort_3(t_list **a);
void	ft_small_to_top(t_list **a, t_list **b);
///great_sort
void	ft_push_swap_great_sort(t_list **a, t_list **b, int size);
void	ft_dont_touch(t_list *a, int size);
void	ft_push_not_stay(t_list **a, int size, t_list **b);
int		index_to_pa(t_list *a, int size_a, t_list *b, int size_b);
///radix_sort
void	ft_push_swap_radix_sort(t_list **a, t_list **b);
void	pb_0_bit(t_list **a, t_list **b, int bit, int size);
void	pa_1_bit(t_list **a, t_list **b, int bit, int size);
void	pa_all(t_list **a, t_list **b);

/*---Operations---*/
void	ft_pa(t_list **a, t_list **b, char c);
void	ft_pb(t_list **a, t_list **b, char c);
void	ft_ra(t_list **a, char c);
void	ft_rb(t_list **b, char c);
void	ft_rr(t_list **a, t_list **b, char c);
void	ft_rra(t_list **a, char c);
void	ft_rrb(t_list **b, char c);
void	ft_rrr(t_list **a, t_list **b, char c);
void	ft_sa(t_list **a, char c);
void	ft_sb(t_list **b, char c);
void	ft_ss(t_list **a, t_list **b, char c);
void	ft_lstcutlast(t_list **lst);

#endif
