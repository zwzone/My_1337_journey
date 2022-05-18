/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:32:56 by zwina             #+#    #+#             */
/*   Updated: 2022/02/16 11:14:19 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	make_child_process(char **av, int *fd_pipe, int i, char **p)
{
	char	**arg;
	int		pid;

	pid = fork();
	if (pid == -1)
		ft_error(0, "fork");
	if (pid == 0)
	{
		arg = ft_split(av[i], ' ');
		if (!arg)
			ft_error(0, "split");
		if (i == 2)
			first_cmd(av[1], arg, fd_pipe, p);
		else
			second_cmd(av[4], arg, fd_pipe, p);
	}
	if (i == 3)
	{
		close(fd_pipe[0]);
		close(fd_pipe[1]);
	}
}

int	main(int ac, char **av, char **p)
{
	int	fd_pipe[2];
	int	i;

	if (ac != 5)
		ft_error(WNA, "pipex");
	if (pipe(fd_pipe) == -1)
		ft_error(0, "pipe");
	i = 2;
	while (i < 4)
	{
		make_child_process(av, fd_pipe, i, p);
		i++;
	}
	while (wait(NULL) != -1)
		;
	return (0);
}
