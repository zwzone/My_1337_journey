/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 14:24:11 by zwina             #+#    #+#             */
/*   Updated: 2021/08/21 08:34:46 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base(char *base);
int	ft_atoi_base(char *str, int bs, char *base);

int	ft_nbrlen(int nbr, int bs)
{
	unsigned int	len;
	unsigned int	multi;
	unsigned int	nbr_plus;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	nbr_plus = (unsigned int)nbr;
	multi = 1;
	while (nbr_plus / multi > 0)
	{
		multi *= bs;
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base, char **str)
{
	unsigned int	nbr_plus;
	unsigned int	bs;
	unsigned int	ten;
	unsigned int	i;

	bs = ft_base(base);
	i = 0;
	if (nbr < 0)
	{
		(*str)[i++] = '-';
		nbr *= -1;
	}
	nbr_plus = (unsigned int)nbr;
	ten = 1;
	while (nbr_plus / ten >= bs)
		ten *= bs;
	while (ten > 0)
	{
		(*str)[i++] = base[(nbr_plus / ten) % bs];
		ten /= bs;
	}
	(*str)[i] = '\0';
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nbr_decimal;
	char			*str;

	if (!ft_base(base_from) || !ft_base(base_to))
		return (0);
	nbr_decimal = ft_atoi_base(nbr, ft_base(base_from), base_from);
	str = (char *)malloc(
			sizeof (char) * (ft_nbrlen(nbr_decimal, ft_base(base_to)) + 1));
	if (!str)
		return (0);
	ft_putnbr_base(nbr_decimal, base_to, &str);
	return (str);
}
