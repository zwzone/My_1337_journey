NAME		:= pipex
CCIW		:= cc -I./includes -Wall -Wextra -Werror

LIBFT		:= ./libs/Libft/libft.a
LINK_LIBFT	:= -L./libs/Libft -lft

G_N_L		:= src/bonus/get_next_line/get_next_line.c \
			   src/bonus/get_next_line/get_next_line_utils.c
MAND_SRCS	:= src/pipex.c \
			   src/cmd.c \
			   src/get_pathfile.c \
			   src/ft_error.c
BONUS_SRCS	:= $(G_N_L) \
			   src/bonus/pipex_bonus.c \
			   src/bonus/cmd_bonus.c \
			   src/get_pathfile.c \
			   src/ft_error.c

MAND_OBJS	:= $(MAND_SRCS:src/%.c=bin/%.o)
MAND_LIB	:= ./bin/libobj.a
LINK_MAND	:= -L./bin -lobj

BONUS_OBJS	:= $(BONUS_SRCS:src/%.c=bin/%.o)
BONUS_LIB	:= ./bin/bonus/libobj_bonus.a
LINK_BONUS	:= -L./bin/bonus -lobj_bonus

#|-- Making MANDATORY --|
all : $(NAME)

$(NAME) : bin $(LIBFT) $(MAND_LIB)
	@$(CCIW) $(LINK_MAND) $(LINK_LIBFT) -o $(NAME)
	@printf "\e[38;5;220m\t####### Pipex is READY #######\e[0m\n"
	@rm -rf $(BONUS_LIB)

$(MAND_LIB) : $(MAND_OBJS)
	@ar rcs $@ $^
#|______________________|
#
#
#|-- Making BONUS --|
bonus : $(BONUS_LIB)

$(BONUS_LIB) : bin $(LIBFT) $(BONUS_OBJS)
	@ar rcs $@ $(BONUS_OBJS)
	@$(CCIW) $(LINK_BONUS) $(LINK_LIBFT) -o $(NAME)
	@printf "\e[38;5;220m\t####### Pipex (bonus) is READY #######\e[0m\n"
	@rm -rf $(MAND_LIB)
#|__________________|
#
#
#|-- Making OBJs --|
bin/%.o : src/%.c
	@$(CCIW) -c $< -o $@

bin :
	@mkdir bin
	@mkdir bin/bonus
	@mkdir bin/bonus/get_next_line
	@printf "\e[38;5;190m\t==>>directory of binaries is created.\e[0m\n"
#|_________________|
#
#
#|-- Making LIBFT --|
$(LIBFT) :
	@make -C ./libs/Libft
#|__________________|
#
#
#|-- Cleaning and Remaking --|
clean :
	@make clean -C ./libs/Libft
	@rm -rf bin
	@printf "\e[38;5;190m\t==>>directory of binaries is removed.\e[0m\n"

fclean : clean
	@make fclean -C ./libs/Libft
	@rm -f $(NAME)
	@printf "\e[38;5;220m\t####### Pipex is REMOVED #######\e[0m\n"

re : fclean all
#|___________________________|

.PHONY : clean