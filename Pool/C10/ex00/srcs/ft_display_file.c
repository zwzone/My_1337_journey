/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:06:39 by zwina             #+#    #+#             */
/*   Updated: 2021/08/26 18:15:30 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int ac, char **av)
{
	char	c;
	int		fd;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
			ft_puterr("Cannot read file.\n");
		else
		{
			while (read(fd, &c, 1) == 1)
				write(1, &c, 1);
			if (read(fd, &c, 1) == -1)
				ft_puterr("Cannot read file.\n");
			close(fd);
		}
	}
	else if (ac == 1)
		ft_puterr("File name missing.\n");
	else
		ft_puterr("Too many arguments.\n");
	return (0);
}
