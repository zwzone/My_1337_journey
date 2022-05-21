/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:17:15 by zwina             #+#    #+#             */
/*   Updated: 2022/03/17 14:26:51 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	run_philo(char **av)
{
	t_philo			*philos;
	t_info			*info;
	unsigned int	n;
	unsigned int	i;
	int				error;

	n = ft_atoi(av[1]);
	philos = (t_philo *)malloc(sizeof(t_philo) * n);
	if (philos == NULL)
		return (1);
	info = (t_info *)malloc(sizeof(t_info));
	if (info == NULL)
		return (1);
	i = 0;
	while (i < n)
		philos[i++].info = info;
	error = setup_simulation(philos, av, n);
	if (error)
		return (error);
	error = begin_simulation(philos, n);
	if (error)
		return (error);
	return (end_simulation(philos, n));
}

int	setup_simulation(t_philo *philos, char **av, unsigned int n)
{
	unsigned int	i;
	int				error;

	philos->info->die = ft_atoi(av[2]);
	philos->info->eat = ft_atoi(av[3]);
	philos->info->sleep = ft_atoi(av[4]);
	philos->info->forks = \
		(pthread_mutex_t *)malloc(sizeof(pthread_mutex_t) * n);
	i = 1;
	while (i <= n)
	{
		philos[i - 1].ph_id = i;
		philos[i - 1].next_id = (i % n) + 1;
		philos[i - 1].death = 0;
		philos[i - 1].is_eating = 0;
		philos[i - 1].meals = ft_atoi(av[5]);
		error = pthread_mutex_init(&philos->info->forks[i - 1], NULL);
		if (error)
			return (error);
		i++;
	}
	return (0);
}

int	begin_simulation(t_philo *philos, unsigned int n)
{
	unsigned int	i;
	int				error;

	philos->info->start_time = getthetime();
	i = 0;
	while (i < n)
	{
		philos[i].last_eat = philos[i].info->start_time;
		error = pthread_create(&philos[i].th, NULL, \
								philosopher, philos + i);
		if (error)
			return (error);
		usleep(100);
		i++;
	}
	return (0);
}

int	end_simulation(t_philo *philos, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (1)
	{
		j = 0;
		while (j < n && philos[j].meals == 0)
			j++;
		if (j == n)
			break ;
		if (!philos[i].is_eating && \
			getthetime() - philos[i].last_eat >= philos[i].info->die)
		{
			j = 0;
			while (j < n)
				philos[j++].death = 1;
			print_death(philos[i]);
			break ;
		}
		if (++i == n)
			i = 0;
	}
	return (print_end(philos, n));
}

int	print_end(t_philo *philos, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		pthread_join(philos[i++].th, NULL);
	printf("%s%s%s\033[38;5;208m*****   END SIMULATION   *****\033[0m\n", \
													BOLD, UNDERLINE, ITALIC);
	i = 0;
	while (i < n)
		pthread_mutex_destroy(&philos->info->forks[i++]);
	return (0);
}
