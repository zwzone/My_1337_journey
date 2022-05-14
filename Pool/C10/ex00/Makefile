# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 10:54:53 by zwina             #+#    #+#              #
#    Updated: 2021/08/25 09:07:06 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
SRCS	= srcs/ft_display_file.c \
		  srcs/ft_put.c
OBJS	= ${SRCS:.c=.o}
INCL	= includes/ft.h
GCCW	= gcc -Wall -Wextra -Werror

.c.o:
	${GCCW} -c $< -o ${<:.c=.o} -I ${INCL}

all: ${NAME}

${NAME}: ${OBJS}
	${GCCW} ${OBJS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
