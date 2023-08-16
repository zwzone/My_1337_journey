# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/30 10:17:55 by zwina             #+#    #+#              #
#    Updated: 2022/09/29 21:11:26 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPW		:=	c++ -Wall -Wextra -Werror -std=c++98
NAME		:=	Intern
SRCS		:=	main.cpp \
						Bureaucrat.cpp \
						Form.cpp \
						ShrubberyCreationForm.cpp \
						RobotomyRequestForm.cpp \
						PresidentialPardonForm.cpp \
						Intern.cpp

all: ${NAME}

${NAME}: ${SRCS}
	${CPPW} ${SRCS} -o ${NAME}

clean:
	rm -rf ${NAME}

re: clean all

.PHONY: clean
