# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 05:39:25 by cghanime          #+#    #+#              #
#    Updated: 2019/10/25 19:37:09 by cghanime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address,undefined
INC_FLAGS = -Iinc

LIB = ./libft/libft.a
LIB_H = ./libft/libft.h

SRCS_PATH = ./srcs
LIB_PATH = ./libft
INC_PATH = ./inc
OBJ_PATH = ./obj

SRCS_NAME =	algo.c \
		check_tabs.c \
		check_twins.c \
		compute_mediane.c \
		init.c \
		master.c \
		push.c \
		push_swap.c \
		push_to.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \

INC_NAME = push_swap.h

OBJ_NAME = $(SRCS_NAME:.c=.o)
OBJ_LIB_NAME = $(SRCS_LIB_NAME:.c=.o)

SRC = $(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

############
# <colors> #
############

YELLOW = \033[033m
GREEN = \033[032m
BLUE = \033[36m
RED = \033[031m
PURPLE = \033[35m
RESET = \033[0m

#############
# </colors> #
#############

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	$(CC) $(FLAGS) $(LIB) $(SRC) -o $@
	@printf "$(GREEN)Compiling Push_Swap...$(RESET)"
	@printf "$(GREEN)+$(RESET)"
	@printf "$(GREEN)[OK]$(RESET)"

$(LIB):
	$(MAKE) -C $(LIB_PATH)

$(OBJ_PATH)/%.o: $(SRCS_PATH)/%.c
	mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) -o $@ -c $<


clean:
	make clean -C $(LIB_PATH)
	rm -rf $(OBJ)
	@printf "033\[033mPush_Swap Cleaning Objects...033\[0m"
	@printf "033\[033m+033\0m"
	@printf "033\[033m[OK]033\0m"

fclean: clean
	rm -rf ./obj $(NAME)
	@printf "033\[034mPush_Swap Cleaning Lib...033\[0m"
	@printf "033\[034m+033\0m"
	@printf "033\[034m[OK]033\0m"

re: fclean all

norme:
	@norminette $(SRC) $(LIB) $(INC)
	@printf "033\[035mPush_Swap Norminette...033\[0m"
	@printf "033\[035m+033\0m"
	@printf "033\[035m[OK]033\0m"

.PHONY: all clean fclean re norme
