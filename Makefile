# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 05:39:25 by cghanime          #+#    #+#              #
#    Updated: 2019/11/08 01:40:20 by cghanime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address,undefined
INC_FLAGS = -Iinc

LIB = ./libft/libft.a
LIB_H = ./libft/libft.h

SRC_PATH = ./srcs
LIB_PATH = ./libft
INC_PATH = ./inc
OBJ_PATH = ./obj
DBUG_PATH = ./.debug

SRC_NAME =	check_tabs.c \
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
			get_arg.c \

DBUG_NAME = print_stack.c \

INC_NAME = push_swap.h

OBJ_NAME = $(SRCS_NAME:.c=.o)
OBJ_LIB_NAME = $(SRCS_LIB_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))
DBUG = $(addprefix $(DBUG_PATH)/, $(DBUG_NAME))

############
# <Colors> #
############

YELLOW = \033[033m
GREEN = \033[032m
BLUE = \033[36m
RED = \033[031m
PURPLE = \033[35m
RESET = \033[0m
BOLD = \e[1m
/BOLD = \e[0m

#############
# </Colors> #
#############

all: $(NAME)

$(NAME): $(LIB) $(OBJ) $(SRC) $(DBUG)
	@$(CC) $(FLAGS) $(LIB) $(SRC) $(DBUG) -o $@
	@printf "$(GREEN)[Compiling Push_Swap...]$(RESET)		"
	@printf "$(BOLD)$(GREEN)[OK]$(RESET)$(/BOLD)\n"

$(LIB):
	@$(MAKE) -C $(LIB_PATH)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(DBUG_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<

clean:
	@make clean -C $(LIB_PATH)
	@rm -rf $(OBJ)
	@printf "$(RED)[Cleaning Push_Swap Objects...]$(RESET)		"
	@printf "$(BOLD)$(GREEN)[OK]\033[0m$(RESET)$(/BOLD)\n"

fclean: clean
	@make fclean -C $(LIB_PATH)
	@rm -rf ./obj $(NAME)
	@printf "$(RED)[Cleaning Push_Swap Executable...]$(RESET)	"
	@printf "$(BOLD)$(GREEN)[OK]$(RESET)$(/BOLD)\n"

re: fclean all

norme:
	@norminette $(SRC) $(LIB) $(INC)
	@printf "$(YELLOW)[Push_Swap Norminette...]$(RESET)		"
	@printf "$(BOLD)$(GREEN)[OK]$(RESET)$(/BOLD)\n"

.PHONY: all clean fclean re norme
