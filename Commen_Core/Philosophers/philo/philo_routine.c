/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 11:27:39 by zwina             #+#    #+#             */
/*   Updated: 2022/03/17 09:14:11 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*philosopher(void *philo_data)
{
	t_philo	*this_philo;

	this_philo = (t_philo *)philo_data;
	while (!this_philo->death && this_philo->meals)
	{
		pthread_mutex_lock(&this_philo->info->forks[this_philo->ph_id - 1]);
		print_message(this_philo, TAKE_FIRST_FORK);
		if (this_philo->ph_id == this_philo->next_id)
			return (NULL);
		pthread_mutex_lock(&this_philo->info->forks[this_philo->next_id - 1]);
		print_message(this_philo, TAKE_SECOND_FORK);
		this_philo->last_eat = getthetime();
		this_philo->is_eating = 1;
		print_message(this_philo, EAT);
		pause_philo(&this_philo->death, this_philo->info->eat);
		this_philo->is_eating = 0;
		if (this_philo->meals != -1)
			this_philo->meals--;
		pthread_mutex_unlock(&this_philo->info->forks[this_philo->ph_id - 1]);
		pthread_mutex_unlock(&this_philo->info->forks[this_philo->next_id - 1]);
		print_message(this_philo, SLEEP);
		pause_philo(&this_philo->death, this_philo->info->sleep);
		print_message(this_philo, THINK);
	}
	return (NULL);
}

void	print_message(t_philo *this_philo, unsigned int msg)
{
	if (this_philo->death)
		return ;
	if (msg == EAT)
		printf("%s%s%s%-6lums : %s%s%4u %s %sis eating.%s\n", \
BOLD, ITALIC, CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, \
WHITE, this_philo->ph_id, RESET, GREEN, RESET);
	else if (msg == SLEEP)
		printf("%s%s%s%-6lums : %s%s%4u %s %sis sleeping.%s\n", BOLD, ITALIC, \
CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, WHITE, \
this_philo->ph_id, RESET, BLUE, RESET);
	else if (msg == THINK)
		printf("%s%s%s%-6lums : %s%s%4u %s %sis thinking.%s\n", BOLD, ITALIC, \
CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, WHITE, \
this_philo->ph_id, RESET, GOLD, RESET);
	else if (msg == TAKE_FIRST_FORK)
		printf("%s%s%s%-6lums : %s%s%4u %s %shas taken the first fork.%s\n", \
BOLD, ITALIC, CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, \
WHITE, this_philo->ph_id, RESET, YELLOW, RESET);
	else if (msg == TAKE_SECOND_FORK)
		printf("%s%s%s%-6lums : %s%s%4u %s %shas taken the second fork.%s\n", \
BOLD, ITALIC, CYAN, getthetime() - this_philo->info->start_time, UNDERLINE, \
WHITE, this_philo->ph_id, RESET, YELLOW, RESET);
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
