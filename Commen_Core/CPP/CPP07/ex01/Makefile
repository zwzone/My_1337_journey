# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 08:37:33 by zwina             #+#    #+#              #
#    Updated: 2022/10/08 08:11:29 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	Iter
SRCS		:=	main.cpp

all: ${NAME}

${NAME}: ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

re: clean all

.PHONY: clean
