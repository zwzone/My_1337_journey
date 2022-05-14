/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:22:26 by zwina             #+#    #+#             */
/*   Updated: 2021/08/21 08:46:31 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

void	ft_strs_to_str(int size, char **strs, char *sep, char **str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			(*str)[k++] = strs[i][j++];
		j = 0;
		if (i < size - 1)
			while (sep[j])
				(*str)[k++] = sep[j++];
		i++;
	}
	(*str)[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total_len;

	total_len = ft_len(strs, sep, size);
	i = 0;
	str = (char *)malloc(sizeof (char) * (total_len + 1));
	if (str == 0)
		return (0);
	ft_strs_to_str(size, strs, sep, &str);
	return (str);
}
