/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:32:26 by zwina             #+#    #+#             */
/*   Updated: 2022/02/16 11:16:02 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	first_cmd(char *file, char **arg, int *fd_pipe, char **p)
{
	int		fd_file;

	if (access(file, R_OK) == -1)
		ft_error(0, file);
	fd_file = open(file, O_RDONLY);
	if (fd_file == -1)
		ft_error(0, file);
	if (dup2(fd_file, STDIN_FILENO) == -1)
		ft_error(0, "dup2");
	if (dup2(fd_pipe[1], STDOUT_FILENO) == -1)
		ft_error(0, "dup2");
	close(fd_pipe[0]);
	close(fd_pipe[1]);
	close(fd_file);
	if (execve(get_pathfile(arg[0], p), arg, p) == -1)
		ft_error(0, arg[0]);
}

void	second_cmd(char *file, char **arg, int *fd_pipe, char **p)
{
	int	fd_file;

	if (!access(file, F_OK))
		if (access(file, W_OK) == -1)
			ft_error(0, file);
	fd_file = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_file == -1)
		ft_error(0, file);
	if (dup2(fd_pipe[0], STDIN_FILENO) == -1)
		ft_error(0, "dup2");
	if (dup2(fd_file, STDOUT_FILENO) == -1)
		ft_error(0, "dup2");
	close(fd_pipe[0]);
	close(fd_pipe[1]);
	close(fd_file);
	if (execve(get_pathfile(arg[0], p), arg, p) == -1)
		ft_error(0, arg[0]);
}
