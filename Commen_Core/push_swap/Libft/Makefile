CCW			:= cc -Wall -Wextra -Werror
LIB			:= libft.a
SRCS		:= ft_atoi.c \
			   ft_putchar_fd.c \
			   ft_putnbr_fd.c \
			   ft_putstr_fd.c \
			   ft_strncmp.c \
			   ft_lstadd_back_bonus.c \
			   ft_lstadd_front_bonus.c \
			   ft_lstclear_bonus.c \
			   ft_lstlast_bonus.c \
			   ft_lstnew_bonus.c \
			   ft_lstsize_bonus.c \
			   ft_lstindex_bonus.c
OBJS		:= $(SRCS:%.c=bin/%.o)

all : $(LIB)

$(LIB) : bin $(OBJS)


$(OBJS) :
	@$(CCW) -c $(@:bin/%.o=%.c) -o $@
	@ar -rcs $(LIB) $@

bin :
	@mkdir bin

clean :
	@rm -f $(OBJS)
	@rm -rf bin

fclean : clean
	@rm -f $(LIB)

re : fclean all

.PHONY : clean
