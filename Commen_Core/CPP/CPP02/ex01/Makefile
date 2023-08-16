# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 07:23:40 by zwina             #+#    #+#              #
#    Updated: 2022/09/04 07:23:42 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	Fixed
SRCS		:=	main.cpp \
				Fixed.cpp

all : ${NAME}

${NAME} : ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean :
	rm -rf ${NAME}

re : clean all

.PHONY : clean

