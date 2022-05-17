/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwina <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 10:45:03 by zwina             #+#    #+#             */
/*   Updated: 2021/11/23 10:55:18 by zwina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putptr(unsigned long n, int *count);
void	ft_puthexa(unsigned int n, char letter, int *count);
void	ft_putnbr_int(int n, int *count);
void	ft_putnbr_uint(unsigned int n, int *count);

/*****libft*****/
char	*ft_strdup(const char *s1);

#endif
