/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:32:31 by zwina             #+#    #+#             */
/*   Updated: 2022/02/16 10:25:44 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(int nerr, char *str)
{
	if (nerr == CNF)
	{
		ft_putstr_fd("pipex: ", 2);
		ft_putstr_fd(str, 2);
		ft_putendl_fd(": command not found", 2);
	}
	else if (nerr == WNA)
	{
		ft_putstr_fd(str, 2);
		ft_putendl_fd(": wrong number of argument", 2);
	}
	else if (nerr == PATHEX)
	{
		ft_putstr_fd("pipex: ", 2);
		ft_putstr_fd(str, 2);
		ft_putendl_fd(": variable environnement not found", 2);
	}
	else
	{
		ft_putstr_fd("pipex: ", 2);
		perror(str);
	}
	exit(errno);
}
