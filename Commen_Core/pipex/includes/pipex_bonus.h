/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:32:06 by zwina             #+#    #+#             */
/*   Updated: 2022/02/15 11:27:55 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include "../libs/Libft/libft.h"
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <errno.h>
# include <string.h>
# define CNF 1
# define WNA 2
# define PATHEX 3

void	first_cmd(char **av, char **arg, int *fd_pipe, char **p);
void	middle_cmd(char **arg, int *fd_pipe, char **p);
void	last_cmd(char *file, char **arg, char **av, char **p);
char	*get_pathfile(char *filename, char **p);
void	ft_error(int nerr, char *str);
char	*get_next_line(int fd);

#endif
