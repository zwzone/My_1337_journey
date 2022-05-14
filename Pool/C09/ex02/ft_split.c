/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 09:09:18 by zwina             #+#    #+#             */
/*   Updated: 2021/08/23 10:52:02 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_exist(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] && c)
	{
		if (c == str[i])
			return (1337);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_exist(str[i], charset))
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !ft_exist(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_str_to_strs(char *str, char ***strs, char *charset, int nbr_of_strs)
{
	int	i;
	int	len;

	i = 0;
	while (i < nbr_of_strs)
	{
		len = 0;
		while (ft_exist(*str, charset))
			str++;
		len = ft_strlen(str, charset);
		(*strs)[i] = (char *)malloc(sizeof (char) * (len + 1));
		ft_strcpy((*strs)[i], str, charset);
		str += len;
		i++;
	}
	(*strs)[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		nbr_of_strs;

	nbr_of_strs = 0;
	i = 0;
	while (str[i])
	{
		while (!ft_exist(str[i], charset) && str[i])
			i++;
		if (i > 0 && !ft_exist(str[i - 1], charset))
			nbr_of_strs++;
		while (ft_exist(str[i], charset))
			i++;
	}
	strs = (char **)malloc(sizeof (char *) * (nbr_of_strs + 1));
	ft_str_to_strs(str, &strs, charset, nbr_of_strs);
	return (strs);
}
