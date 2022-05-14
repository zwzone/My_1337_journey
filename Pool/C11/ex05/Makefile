# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 16:12:27 by zwina             #+#    #+#              #
#    Updated: 2021/08/25 16:17:12 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
GCCW	= gcc -Wall -Wextra -Werror
SRCS	= srcs/main.c \
		  srcs/function.c \
		  srcs/operators.c
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

.PHONY: all clean fclean all
