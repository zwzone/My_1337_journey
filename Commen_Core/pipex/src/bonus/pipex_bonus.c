/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:32:35 by zwina             #+#    #+#             */
/*   Updated: 2022/02/16 20:20:56 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

char	*get_here_doc_line(void)
{
	ft_putstr_fd("here_doc> ", 1);
	return (get_next_line(0));
}

int	is_here_doc_line_valid(char *lim, char *line)
{
	int	len;
	int	ret;

	len = ft_strlen(lim);
	if (ft_strncmp(lim, line, len))
		ret = 1;
	else
		ret = 0;
	free(lim);
	return (ret);
}

void	here_doc(char *lim)
{
	char	*line;
	char	*input_text;
	char	*tmp;
	int		fd_pipe[2];

	if (pipe(fd_pipe) == -1)
		ft_error(0, "pipe");
	input_text = ft_strdup("");
	line = get_here_doc_line();
	while (line && is_here_doc_line_valid(ft_strjoin(lim, "\n"), line))
	{
		tmp = input_text;
		input_text = ft_strjoin(input_text, line);
		free(line);
		free(tmp);
		line = get_here_doc_line();
	}
	free(line);
	if (dup2(fd_pipe[0], 0) == -1)
		ft_error(0, "dup2");
	write(fd_pipe[1], input_text, ft_strlen(input_text));
	free(input_text);
	close(fd_pipe[0]);
	close(fd_pipe[1]);
}

void	make_child_process(char **av, int ac, int i, char **p)
{
	char	**arg;
	int		fd_pipe[2];
	int		pid;

	if (pipe(fd_pipe) == -1)
		ft_error(0, "pipe");
	pid = fork();
	if (pid == -1)
		ft_error(0, "fork");
	if (pid == 0)
	{
		arg = ft_split(av[i], ' ');
		if (!arg)
			ft_error(0, "split");
		if (i == 2)
			first_cmd(av, arg, fd_pipe, p);
		else if (i < ac - 2)
			middle_cmd(arg, fd_pipe, p);
		else
			last_cmd(av[ac - 1], arg, av, p);
	}
	if (dup2(fd_pipe[0], 0) == -1)
		ft_error(0, "dup2");
	close(fd_pipe[0]);
	close(fd_pipe[1]);
}

int	main(int ac, char **av, char **p)
{
	int	i;

	if ((ac < 5) || (!ft_strncmp(av[1], "here_doc", 9) && ac < 6))
		ft_error(WNA, "pipex");
	if (!ft_strncmp(av[1], "here_doc", 9))
	{
		here_doc(av[2]);
		av++;
		ac--;
	}
	i = 2;
	while (i < ac - 1)
		make_child_process(av, ac, i++, p);
	while (wait(NULL) != -1)
		;
	return (0);
}
