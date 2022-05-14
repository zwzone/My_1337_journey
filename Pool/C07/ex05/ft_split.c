/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 08:59:16 by zwina             #+#    #+#             */
/*   Updated: 2021/08/22 17:00:34 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_exist(char c, char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] && c)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_strlen(char *str, char *charset)
{
	unsigned int	i;

	i = 0;
	while (str[i] && (!ft_exist(str[i], charset)))
		i++;
	return (i);
}

void	ft_str_to_strs(char *str, char ***strs, char *charset, unsigned int nbr)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	while (i < nbr)
	{
		while (ft_exist(*str, charset))
			str++;
		len = ft_strlen(str, charset);
		(*strs)[i] = (char *)malloc(sizeof (char) * (len + 1));
		j = 0;
		while (j < len)
		{
			(*strs)[i][j] = *str;
			str++;
			j++;
		}
		(*strs)[i][j] = '\0';
		i++;
	}
	(*strs)[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	unsigned int	i;
	unsigned int	nbr_of_str;
	char			**strs;

	nbr_of_str = 0;
	i = 0;
	while (str[i])
	{
		while (!ft_exist(str[i], charset) && str[i])
			i++;
		if (i > 0 && !ft_exist(str[i - 1], charset))
			nbr_of_str++;
		while (ft_exist(str[i], charset))
			i++;
	}
	strs = (char **)malloc(sizeof (char *) * (nbr_of_str + 1));
	ft_str_to_strs(str, &strs, charset, nbr_of_str);
	return (strs);
}
