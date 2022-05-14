/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:13:09 by zwina             #+#    #+#             */
/*   Updated: 2021/08/26 08:11:55 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_calc(int n1, int n2, int(*op)(int, int))
{
	int	res;

	res = op(n1, n2);
	ft_putnbr(res);
}

void	ft_do_op(int n1, int n2, char *op, int(**ops)(int, int))
{
	if (!op[1] && op[0] == '+')
		ft_calc(n1, n2, ops[0]);
	else if (!op[1] && op[0] == '-')
		ft_calc(n1, n2, ops[1]);
	else if (!op[1] && op[0] == '*')
		ft_calc(n1, n2, ops[3]);
	else if (!op[1] && op[0] == '/')
	{
		if (n2 == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_calc(n1, n2, ops[2]);
	}
	else if (!op[1] && op[0] == '%')
	{
		if (n2 == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_calc(n1, n2, ops[4]);
	}
	else
		ft_putnbr(0);
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	n1;
	int	n2;
	int	(*p[5])(int, int);

	p[0] = &sum;
	p[1] = &sub;
	p[2] = &div;
	p[3] = &mul;
	p[4] = &mod;
	if (ac == 4)
	{
		n1 = ft_atoi(av[1]);
		n2 = ft_atoi(av[3]);
		ft_do_op(n1, n2, av[2], p);
	}
	return (0);
}
