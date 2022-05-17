# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwina <zwina@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 10:12:03 by zwina             #+#    #+#              #
#    Updated: 2022/02/08 10:42:33 by zwina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCW				= cc -Wall -Wextra -Werror
NAME			= push_swap
CHECKER			= checker
LIBFT			= ./Libft/libft.a
SRC_SETUP		= setup/push_swap_check.c \
				  setup/push_swap_setup.c \
				  setup/ft_is_sorted.c
SRC_OP			= operations/pa.c \
				  operations/pb.c \
				  operations/ra.c \
				  operations/rb.c \
				  operations/rr.c \
				  operations/rra.c \
				  operations/rrb.c \
				  operations/rrr.c \
				  operations/sa.c \
				  operations/sb.c \
				  operations/ss.c
GET				= my_checker/get_next_line/get_next_line.c \
				  my_checker/get_next_line/get_next_line_utils.c
#---push_swap---#
SRC_PUSH_SWAP	= $(SRC_SETUP) $(SRC_OP) \
				  push_swap.c \
				  push_swap_my_sort/push_swap_my_sort.c \
				  push_swap_my_sort/push_swap_my_sort_utils.c \
				  push_swap_radix_sort/push_swap_radix_sort.c \
				  push_swap_radix_sort/push_swap_radix_sort_utils.c
OBJ_PUSH_SWAP	= $(SRC_PUSH_SWAP:.c=.o)
#---checker---#
SRC_CHECKER		= $(SRC_SETUP) $(SRC_OP) $(GET) \
				  my_checker/checker.c
OBJ_CHECKER		= $(SRC_CHECKER:.c=.o)

all :		$(NAME)

$(NAME) :	$(LIBFT) $(OBJ_PUSH_SWAP)
	$(CCW) $(OBJ_PUSH_SWAP) -o $@ -L./Libft -lft

bonus : $(CHECKER)

$(CHECKER) : $(LIBFT) $(OBJ_CHECKER)
	$(CCW) $(OBJ_CHECKER) -o $@ -L./Libft -lft

%.o : %.c
	$(CCW) -c $< -o $@

$(LIBFT) :
	@make -C Libft

clean :
	@rm -f $(OBJ_CHECKER) $(OBJ_PUSH_SWAP)
	@make clean -C Libft

fclean : clean
	@rm -f $(NAME)
	@rm -f $(CHECKER)
	@rm -f $(LIBFT)

re : fclean all

.PHONY: clean
