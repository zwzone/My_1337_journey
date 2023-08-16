# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 10:17:55 by zwina             #+#    #+#              #
#    Updated: 2022/07/30 19:20:59 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	Account
SRCS		:=	Account.cpp\
				tests.cpp
OBJS		:= ${SRCS:.cpp=.o}

all: ${NAME}

${NAME}: ${OBJS}
	${CPPW} ${SRCS} -o ${NAME}

%.o: %.c
	${CPPW} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re: fclean all

.PHONY: clean
