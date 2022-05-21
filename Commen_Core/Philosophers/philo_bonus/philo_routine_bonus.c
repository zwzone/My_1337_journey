/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:50:43 by zwina             #+#    #+#             */
/*   Updated: 2022/03/20 21:21:11 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	philosopher(t_philo *this_philo)
{
	pthread_t	th;

	pthread_create(&th, NULL, the_controller, this_philo);
	while (!this_philo->death && this_philo->meals)
	{
		sem_wait(this_philo->info->forks);
		print_message(this_philo, TAKE_FORK);
		sem_wait(this_philo->info->forks);
		print_message(this_philo, TAKE_FORK);
		print_message(this_philo, EAT);
		this_philo->last_eat = getthetime();
		if (this_philo->meals != -1)
			this_philo->meals--;
		this_philo->is_eating = 1;
		pause_philo(&this_philo->death, this_philo->info->eat);
		this_philo->is_eating = 0;
		sem_post(this_philo->info->forks);
		sem_post(this_philo->info->forks);
		print_message(this_philo, SLEEP);
		pause_philo(&this_philo->death, this_philo->info->sleep);
		print_message(this_philo, THINK);
	}
	pthread_join(th, NULL);
	exit(0);
}

void	print_message(t_philo *this_philo, unsigned int msgs)
{
	if (this_philo->death)
		return ;
	sem_wait(this_philo->info->msg);
	if (msgs == EAT)
		printf("%s%s%s%-6lums : %s%s%4u %s %sis eating.%s\n", \
BOLD, ITALIC, CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, \
WHITE, this_philo->ph_id, RESET, GREEN, RESET);
	else if (msgs == SLEEP)
		printf("%s%s%s%-6lums : %s%s%4u %s %sis sleeping.%s\n", BOLD, ITALIC, \
CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, WHITE, \
this_philo->ph_id, RESET, BLUE, RESET);
	else if (msgs == THINK)
		printf("%s%s%s%-6lums : %s%s%4u %s %sis thinking.%s\n", BOLD, ITALIC, \
CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, WHITE, \
this_philo->ph_id, RESET, GOLD, RESET);
	else if (msgs == TAKE_FORK)
		printf("%s%s%s%-6lums : %s%s%4u %s %shas taken a fork.%s\n", \
BOLD, ITALIC, CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, \
WHITE, this_philo->ph_id, RESET, YELLOW, RESET);
	sem_post(this_philo->info->msg);
}

void	print_death(t_philo this_philo)
{
	printf("%s%s%s%-6lums : %s%s%4u %s %sdied.%s\n", BOLD, ITALIC, CYAN, \
						getthetime() - this_philo.info->start_time, WHITE, \
						UNDERLINE, this_philo.ph_id, RESET, RED, RESET);
}

void	pause_philo(char *death, long state)
{
	long	time;

	time = getthetime();
	while (!(*death) && getthetime() - time < state)
		usleep(50);
}

long	getthetime(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_sec * 1000ul + \
			time.tv_usec / 1000ul);
}
