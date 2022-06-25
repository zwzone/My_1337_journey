/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_fdf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <zwina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 14:49:09 by zwina             #+#    #+#             */
/*   Updated: 2022/03/05 15:37:04 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_help_message(void)
{
	ft_putendl_fd("\n\t\t==>> HELP <<==\n", 1);
	ft_putendl_fd("\tPress { ESC } to exit.\n", 1);
}

int	close_win(t_fdf *fdf)
{
	mlx_destroy_window(fdf->mlx, fdf->win);
	exit(0);
	return (0);
}

int	events(int keycode, t_fdf *fdf)
{
	if (keycode == 53)
	{
		mlx_destroy_window(fdf->mlx, fdf->win);
		exit(0);
	}
	return (0);
}

void	run_fdf(t_fdf *fdf)
{
	fdf->height = HEIGHT;
	fdf->width = WIDTH;
	print_help_message();
	fdf->mlx = mlx_init();
	fdf->win = mlx_new_window(fdf->mlx, fdf->width, fdf->height, "FDF");
	lets_draaaw(fdf);
	mlx_hook(fdf->win, 2, 0, events, fdf);
	mlx_hook(fdf->win, 17, 0, close_win, fdf);
	mlx_loop(fdf->mlx);
}
