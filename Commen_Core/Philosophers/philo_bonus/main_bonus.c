/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:15:26 by zwina             #+#    #+#             */
/*   Updated: 2022/03/20 18:13:48 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	check_arguments(int ac, char **av)
{
	long	n;
	int		i;

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
	return (run_philo_bonus(av));
}
