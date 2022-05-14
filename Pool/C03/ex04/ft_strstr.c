/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:19:18 by zwina             #+#    #+#             */
/*   Updated: 2021/08/12 15:07:14 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (str[i])
	{
		j = 0;
		k = i;
		while (str[k] == to_find[j] && to_find[j] && str[k])
		{
			j++;
			k++;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	if (!to_find[0])
		return (str);
	return (0);
}
