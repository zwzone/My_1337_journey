/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:34:08 by zwina             #+#    #+#             */
/*   Updated: 2022/03/16 12:06:34 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_arguments(int ac, char **av)
{
	unsigned int	n;
	int				i;

	if (!(ac == 5 || ac == 6))
		return (1);
	i = 1;
	while (i < ac)
	{
		n = ft_atoi(av[i]);
		if (n == 0)
			return (2);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	unsigned int	error;

	error = check_arguments(ac, av);
	if (error)
		return (error);
	return (run_philo(av));
}
