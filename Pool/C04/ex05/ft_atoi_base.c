/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 09:27:53 by zwina             #+#    #+#             */
/*   Updated: 2021/08/16 17:28:10 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i + 1);
}

int	ft_isspace(char c)
{
	if ((c >= '\t' && c <= '\r') || c == ' ')
		return (1);
	return (0);
}

int	ft_number(char *str, char *base, int bs)
{
	int	n;
	int	i;
	int	j;

	n = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j] && base[j] != str[i])
			j++;
		if (!base[j])
			return (n);
		n = n * bs + j;
		i++;
	}
	return (n);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	bs;
	int	sign;
	int	n;

	bs = ft_base(base);
	if (!bs)
		return (0);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	n = ft_number(str + i, base, bs);
	return (n * sign);
}
