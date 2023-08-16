# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 12:49:21 by zwina             #+#    #+#              #
#    Updated: 2022/07/29 17:12:15 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	PhoneBookSystem
SRCS		:=	PhoneBook.cpp \
				Contact.cpp \
				PhoneBookSystem.cpp

all: ${NAME}

${NAME}: ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

re: clean all

.PHONY: clean
