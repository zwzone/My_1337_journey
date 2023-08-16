# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 22:41:46 by zwina             #+#    #+#              #
#    Updated: 2022/08/25 22:41:48 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	Zombie
SRCS		:=	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

all : ${NAME}

${NAME} : ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean :
	rm -rf ${NAME}

re : clean all

.PHONY : clean

