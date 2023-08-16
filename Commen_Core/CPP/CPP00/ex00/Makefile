# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:08:18 by zwina             #+#    #+#              #
#    Updated: 2022/07/28 18:27:19 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	megaphone
SRCS		:=	megaphone.cpp

all: ${NAME}

${NAME}:
	${CPPW} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

re: clean all

.PHONY: clean
