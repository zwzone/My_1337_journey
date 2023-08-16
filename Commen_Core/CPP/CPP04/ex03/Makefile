# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/04 07:23:40 by zwina             #+#    #+#              #
#    Updated: 2022/09/17 15:34:25 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	FunnyGame
SRCS		:=	main.cpp \
				AMateria.cpp \
				MateriaSource.cpp \
				Ice.cpp \
				Cure.cpp \
				Character.cpp

all : ${NAME}

${NAME} : ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean :
	rm -rf ${NAME}

re : clean all

.PHONY : clean

