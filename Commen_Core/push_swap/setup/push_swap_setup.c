/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_setup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:40:50 by zwina             #+#    #+#             */
/*   Updated: 2022/01/05 13:26:48 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int	*list_to_arr(t_list *a, int size)
{
	int	i;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		ft_stop(0, arr);
	i = 0;
	while (a)
	{
		arr[i] = *(int *)a->content;
		i++;
		a = a->next;
	}
	bubble_sort(arr, size);
	return (arr);
}

void	ft_put_indexes(t_list **a, int size)
{
	int		i;
	int		j;
	int		*arr;

	arr = list_to_arr(*a, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (arr[j] != *(int *)ft_lstindex(*a, i)->content)
			j++;
		*(int *)ft_lstindex(*a, i)->content = j;
		i++;
	}
}

void	push_swap_setup(int length, char **arg, t_list **a)
{
	t_list	*tmp;
	int		*nbr;
	int		i;

	i = 0;
	while (i < length)
	{
		nbr = (int *)malloc(sizeof (int));
		if (!nbr)
			ft_stop(0, nbr);
		*nbr = atoi(arg[i++]);
		tmp = ft_lstnew(nbr);
		if (!tmp)
			ft_stop(a, 0);
		ft_lstadd_back(a, tmp);
	}
	ft_put_indexes(a, ft_lstsize(*a));
}
