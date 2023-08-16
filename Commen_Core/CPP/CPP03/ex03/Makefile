# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 10:17:55 by zwina             #+#    #+#              #
#    Updated: 2022/09/08 11:50:42 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -Wshadow -std=c++98
NAME		:=	DiamondTrap
SRCS		:=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp \
				FragTrap.cpp \
				DiamondTrap.cpp

all: ${NAME}

${NAME}: ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

re: clean all

.PHONY: clean
