NAME		:= libftprintf.a
CCW			:= cc -Wall -Wextra -Werror
SRCS		:= ft_printf.c ft_printf_utils1.c ft_printf_utils2.c
OBJS		:= $(SRCS:.c=.o)

all :		$(NAME)

$(NAME) :	$(OBJS)

$(OBJS) :
	$(CCW) -c $(@:.o=.c) -o $@
	ar rcs $(NAME) $@

clean :
	rm -f $(OBJS)

fclean :	clean
	rm -f $(NAME)

re :		fclean	all

.PHONY :	clean
