/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:32:28 by zwina             #+#    #+#             */
/*   Updated: 2021/08/25 16:34:33 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	pr_sort;
	int	sort;

	i = 0;
	pr_sort = 0;
	while (i < length - 1)
	{
		sort = f(tab[i], tab[i + 1]);
		if (pr_sort > 0)
		{
			if (sort < 0)
				return (0);
		}
		else if (pr_sort < 0)
			if (sort > 0)
				return (0);
		pr_sort = sort;
		i++;
	}
	return (1);
}
