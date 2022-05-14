/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:21:48 by zwina             #+#    #+#             */
/*   Updated: 2021/08/25 12:26:35 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterr(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_putstr_error(char *ft_cat, char *av, char *str_error)
{
	ft_puterr(basename(ft_cat));
	ft_puterr(": ");
	ft_puterr(av);
	ft_puterr(": ");
	ft_puterr(str_error);
	ft_puterr("\n");
}
