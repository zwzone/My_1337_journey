/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:33:24 by zwina             #+#    #+#             */
/*   Updated: 2022/02/15 11:39:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

int	open_outfile(char **av, char *file)
{
	int	fd;

	if (ft_strncmp(av[0], "here_doc", 8) == 0)
		fd = open(file, O_WRONLY | O_CREAT | O_APPEND, 0644);
	else
		fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
		ft_error(0, file);
	return (fd);
}

void	first_cmd(char **av, char **arg, int *fd_pipe, char **p)
{
	int	fd;

	if (ft_strncmp(av[0], "here_doc", 8) != 0)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			ft_error(0, av[1]);
		if (dup2(fd, 0) == -1)
			ft_error(0, "dup2");
		close(fd);
	}
	if (dup2(fd_pipe[1], STDOUT_FILENO) == -1)
		ft_error(0, "dup2_out");
	close(fd_pipe[0]);
	close(fd_pipe[1]);
	if (execve(get_pathfile(arg[0], p), arg, p) == -1)
		ft_error(0, arg[0]);
}

void	middle_cmd(char **arg, int *fd_pipe, char **p)
{
	if (dup2(fd_pipe[1], STDOUT_FILENO) == -1)
		ft_error(0, "dup2");
	close(fd_pipe[0]);
	close(fd_pipe[1]);
	if (execve(get_pathfile(arg[0], p), arg, p) == -1)
		ft_error(0, arg[0]);
}

void	last_cmd(char *file, char **arg, char **av, char **p)
{
	int	fd_file;

	if (!access(file, F_OK))
		if (access(file, W_OK) == -1)
			ft_error(0, file);
	fd_file = open_outfile(av, file);
	if (dup2(fd_file, STDOUT_FILENO) == -1)
		ft_error(0, "dup2_in");
	close(fd_file);
	if (execve(get_pathfile(arg[0], p), arg, p) == -1)
		ft_error(0, arg[0]);
}
