/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:09:24 by zwina             #+#    #+#             */
/*   Updated: 2021/08/26 18:08:15 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_cat(int fd)
{
	char	c;
	int		i;
	int		rd;

	i = 0;
	rd = read(fd, &c, 1);
	while (rd == 1)
	{
		write(1, &c, 1);
		rd = read(fd, &c, 1);
	}
	if (rd == -1)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	char	c;
	int		fd;
	int		i;

	if (ac == 1)
		while (read(0, &c, 1))
			ft_putchar(c);
	else
	{
		i = 1;
		while (i < ac)
		{
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				ft_putstr_error(av[0], av[i], strerror(errno));
			else
			{
				if (!ft_cat(fd))
					ft_putstr_error(av[0], av[i], strerror(errno));
				close(fd);
			}
			i++;
		}
	}
	return (0);
}
