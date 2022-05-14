/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:21:32 by zwina             #+#    #+#             */
/*   Updated: 2021/08/25 16:22:55 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	sum(int	n1, int n2)
{
	return (n1 + n2);
}

int	sub(int n1, int n2)
{
	return (n1 - n2);
}

int	div(int n1, int n2)
{
	return (n1 / n2);
}

int	mul(int n1, int n2)
{
	return (n1 * n2);
}

int	mod(int n1, int n2)
{
	return (n1 % n2);
}
