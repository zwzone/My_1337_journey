/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:17:19 by zwina             #+#    #+#             */
/*   Updated: 2022/03/20 13:59:07 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/time.h>
# include <pthread.h>
# include <semaphore.h>
# include <signal.h>
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define ITALIC "\033[3m"
# define UNDERLINE "\033[4m"
# define WHITE "\033[37m"
# define CYAN "\033[36m"
# define GOLD "\033[38;5;172m"
# define RED "\033[31m"
# define GREEN "\033[38;5;82m"
# define BLUE "\033[38;5;27m"
# define YELLOW "\033[38;5;226m"
# define ARG_ERR 1
# define DIE 0u
# define EAT 1u
# define SLEEP 2u
# define THINK 3u
# define TAKE_FORK 4u

typedef struct s_info
{
	long	die;
	long	eat;
	long	sleep;
	long	start_time;
	sem_t	*forks;
	sem_t	*msg;
}					t_info;

typedef struct s_philo
{
	unsigned int	ph_id;
	char			death;
	char			is_eating;
	long			last_eat;
	long			meals;
	pid_t			*pid;
	t_info			*info;
}					t_philo;

long	ft_atoi(char *str);
long	getthetime(void);
void	print_message(t_philo *this_philo, unsigned int msg);
void	print_death(t_philo this_philo);
void	philosopher(t_philo *this_philo);
void	pause_philo(char *death, long state);
int		setup_simulation(t_philo *philos, char **av, unsigned int n);
int		begin_simulation(t_philo *philos, unsigned int n);
int		print_end(t_philo *philos, unsigned int n);
int		end_simulation(t_philo *philos, unsigned int n);
void	*the_controller(void *philo);
int		run_philo_bonus(char **av);

#endif