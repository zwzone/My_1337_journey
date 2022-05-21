/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:19:22 by zwina             #+#    #+#             */
/*   Updated: 2022/03/21 10:02:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

int	run_philo_bonus(char **av)
{
	t_philo			*philos;
	unsigned int	n;
	int				error;

	n = ft_atoi(av[1]);
	philos = (t_philo *)malloc(sizeof(t_philo));
	if (philos == NULL)
		return (1);
	philos->info = (t_info *)malloc(sizeof(t_info));
	if (philos->info == NULL)
		return (1);
	philos->pid = (pid_t *)malloc(sizeof(pid_t) * n);
	if (philos->pid == NULL)
		return (1);
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
	philos->info->die = ft_atoi(av[2]);
	philos->info->eat = ft_atoi(av[3]);
	philos->info->sleep = ft_atoi(av[4]);
	sem_unlink("forks");
	sem_unlink("msg");
	philos->info->forks = sem_open("forks", O_CREAT, 0644, n);
	philos->info->msg = sem_open("msg", O_CREAT, 0644, 1);
	if (philos->info->forks == SEM_FAILED || philos->info->msg == SEM_FAILED)
		return (1);
	philos->death = 0;
	philos->is_eating = 0;
	philos->meals = ft_atoi(av[5]);
	return (0);
}

int	begin_simulation(t_philo *philos, unsigned int n)
{
	unsigned int	i;

	philos->info->start_time = getthetime();
	philos->last_eat = philos->info->start_time;
	i = 0;
	while (i < n)
	{
		philos->ph_id = i + 1;
		philos->pid[i] = fork();
		if (philos->pid[i] == 0)
			philosopher(philos);
		usleep(100);
		i++;
	}
	return (0);
}

int	end_simulation(t_philo *philos, unsigned int n)
{
	unsigned int	i;
	pid_t			ret_wait;
	int				status;

	status = 0;
	ret_wait = 0;
	while (ret_wait != -1 && status == 0)
		ret_wait = waitpid(-1, &status, 0);
	i = 0;
	if (status != 0)
		while (i < n)
			kill(philos->pid[i++], SIGKILL);
	printf("%s%s%s\033[38;5;208m*****   END SIMULATION   *****\033[0m\n", \
													BOLD, UNDERLINE, ITALIC);
	sem_close(philos->info->forks);
	sem_unlink("forks");
	sem_close(philos->info->msg);
	sem_unlink("msg");
	return (0);
}

void	*the_controller(void *philo)
{
	t_philo	*this_philo;

	this_philo = (t_philo *)philo;
	while ((this_philo->is_eating) || (!this_philo->is_eating && \
			getthetime() - this_philo->last_eat < this_philo->info->die))
		usleep(50);
	if (this_philo->meals == 0)
		return (NULL);
	this_philo->death = 1;
	sem_wait(this_philo->info->msg);
	print_death(*this_philo);
	exit(1);
}
