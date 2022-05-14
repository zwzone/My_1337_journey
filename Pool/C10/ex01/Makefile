# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 10:24:10 by zwina             #+#    #+#              #
#    Updated: 2021/08/25 10:46:46 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
GCCW	= gcc -Wall -Wextra -Werror
SRCS	= srcs/main.c srcs/ft_cat.c
OBJS	= ${SRCS:.c=.o}
INCL	= includes/ft.h

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
