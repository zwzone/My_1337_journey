# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 10:17:55 by zwina             #+#    #+#              #
#    Updated: 2022/09/29 19:17:39 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	Forms
SRCS		:=	main.cpp \
						Bureaucrat.cpp \
						Form.cpp \
						ShrubberyCreationForm.cpp \
						RobotomyRequestForm.cpp \
						PresidentialPardonForm.cpp

all: ${NAME}

${NAME}: ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

re: clean all

.PHONY: clean
