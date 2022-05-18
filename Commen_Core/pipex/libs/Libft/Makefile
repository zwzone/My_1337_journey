CCW			:= cc -Wall -Wextra -Werror
LIB			:= libft.a
SRCS		:= ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c
SRCS_BONUS	:= ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c\
	ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstmap_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c
OBJS		:= $(SRCS:%.c=bin/%.o)
OBJS_BONUS	:= $(SRCS_BONUS:%.c=bin/%.o)

all : $(LIB)

$(LIB) : bin $(OBJS)
	@echo "\033[1;3;36m\t---------\033[4mLibft\033[24m is created.---------\033[0m"

bonus : bin $(OBJS_BONUS)

$(OBJS) $(OBJS_BONUS) :
	@$(CCW) -c $(@:bin/%.o=%.c) -o $@
	@ar -rcs $(LIB) $@

bin :
	@mkdir bin

clean :
	@rm -rf bin

fclean : clean
	@rm -f $(LIB)
	@echo "\033[1;3;36m\t---------\033[4mLibft\033[24m is cleaned.---------\033[0m"

re : fclean all

.PHONY : clean
