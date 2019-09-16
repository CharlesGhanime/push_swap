# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 05:39:25 by cghanime          #+#    #+#              #
#    Updated: 2019/09/16 16:21:34 by cghanime         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror #-g3 -fsanitize=address,undefined
CPP_FLAGS = -Iinc

NAME = push_swap

SRCS_PATH = ./src
LIB_PATH = ./lib
INC_PATH = ./inc
OBJ_PATH = ./obj

SRCS_NAME = ps_check_list.c	\
			ps_algo.c \
			ps_push_swap.c \
			ps_swap.c \
			ps_push.c \
			ps_rotate.c \
			ps_display.c \
			ps_reverse_rotate.c \
			ps_atoi.c \
			ps_isdigit.c \
			ps_lstadd.c \
			ps_lstnew.c \
			ps_strcat.c \
			ps_strlen.c \
			ps_check_double.c \
			ps_putchar.c \
			ps_putstr.c \
			ps_putnbr.c \
			#ps_checker.c \

INC_NAME = push_swap.h

OBJ_NAME = $(SRCS_NAME:.c=.o)

SRC = $(addprefix $(SRCS_PATH)/, $(SRCS_NAME))
INC = $(addprefix $(INC_PATH)/, $(INC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ_PATH) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@
#	printf "033\[032mCompiling Push_Swap...033\0m"
#	printf "033\[032m+033\0m"
#	printf "033\[032m[OK]033\0m"

$(OBJ_PATH):
	mkdir $@

$(OBJ): $(OBJ_PATH)%.o: $(SRCS_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_PATH)
	printf "033\[033mPush_Swap Cleaning Objects...033\[0m"
	printf "033\[033m+033\0m"
	printf "033\[033m[OK]033\0m"

fclean: clean
	rm -rf ./obj $(NAME)
	printf "033\[034mPush_Swap Cleaning Lib...033\[0m"
	printf "033\[034m+033\0m"
	printf "033\[034m[OK]033\0m"

re: fclean all

norme:
	norminette $(SRC) $(LIB) $(INC)
	printf "033\[035mPush_Swap Norminette...033\[0m"
	printf "033\[035m+033\0m"
	printf "033\[035m[OK]033\0m"

.PHONY: all clean fclean re norme
#.SILENT:
#			ps_checker.c \
#			ps_checker.c \
