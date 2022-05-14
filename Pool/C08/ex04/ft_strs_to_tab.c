/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 12:43:49 by zwina             #+#    #+#             */
/*   Updated: 2021/08/21 19:07:04 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;
	int			len;

	arr = (t_stock_str *)malloc(sizeof (t_stock_str) * (ac + 1));
	if (arr == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		(arr + i)->size = len;
		(arr + i)->str = av[i];
		(arr + i)->copy = (char *)malloc(sizeof (char) * (len + 1));
		if ((arr + i) != 0)
			ft_strcpy((arr + i)->copy, av[i]);
		i++;
	}
	(arr + i)->str = 0;
	return (arr);
}
