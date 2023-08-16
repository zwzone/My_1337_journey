# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 22:43:10 by zwina             #+#    #+#              #
#    Updated: 2022/08/25 22:43:11 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	PTR_REF
SRCS		:=	main.cpp

all : ${NAME}

${NAME} : ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean :
	rm -rf ${NAME}

re : clean all

.PHONY : clean

