# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychaaibi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 18:04:45 by ychaaibi          #+#    #+#              #
#    Updated: 2021/08/23 18:22:52 by ychaaibi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= srcs/ft_putchar.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strlen.c \
		  srcs/ft_strcmp.c \
		  srcs/ft_swap.c

OBJS	= ${SRCS:.c=.o}

ICLS	= includes

GCC		= gcc

ARRC	= ar rc

RM		= rm -f

FLGS	= -Wall -Wextra -Werror


.c.o:
			${GCC} ${FLGS} -c $< -o ${<:.c=.o} -I ${ICLS}

all:		${NAME}

${NAME}:	${OBJS}
			${ARRC} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
