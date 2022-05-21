NAME	:= philo/philo
NAME_B	:= philo_bonus/philo_bonus
CCWI	:= cc -Wall -Wextra -Werror
SRCS	:= philo/ft_atoi.c \
		   philo/main.c \
		   philo/philo.c \
		   philo/philo_routine.c
SRCS_B	:= philo/ft_atoi.c \
		   philo_bonus/main_bonus.c \
		   philo_bonus/philo_bonus.c \
		   philo_bonus/philo_routine_bonus.c
OBJS	:= $(SRCS:philo/%.c=philo/bin/%.o)
OBJS_B	:= $(SRCS_B:philo_bonus/%.c=philo_bonus/bin_bonus/%.o)

all : $(NAME)

$(NAME) : philo/bin $(OBJS)
	$(CCWI) $(OBJS) -o $(NAME)

bonus : $(NAME_B)

$(NAME_B) : philo_bonus/bin_bonus $(OBJS_B)
	$(CCWI) $(OBJS_B) -o $(NAME_B)

philo/bin/%.o : philo/%.c
	$(CCWI) -c $< -o $@

philo_bonus/bin_bonus/%.o : philo_bonus/%.c
	$(CCWI) -c $< -o $@

philo/bin philo_bonus/bin_bonus :
	mkdir $@

clean :
	rm -rf philo/bin
	rm -rf philo_bonus/bin_bonus

fclean : clean
	rm -f $(NAME)
	rm -f $(NAME_B)

re : fclean all bonus

.PHONY : clean