# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 00:21:21 by kvisouth          #+#    #+#              #
#    Updated: 2023/02/07 11:54:19 by kvisouth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#This makefile first compile every C files in /src ans main.c into .o stored in /obj created by make.
#Then it compiles the libft using the Makefile in /libft/Makefile.
#Then It's compiling with gcc -Wall -Wextra -Werror, all the files in /obj + libft.a in libft/
#Into an executable named push_swap thanks to the parameter -o in gcc.
#Very simply : it's doing 'gcc -Wall -Wextra -Werror -o push_swap <all .o> <libft.a>'

#The annoying things like "\33[31m" are just colors..

NAME = push_swap
SRCS = src/algo_2_3.c \
		src/algo_4_5.c \
		src/algo_radix.c \
		src/check_args.c \
		src/check_args2.c \
		src/check_sort.c \
		src/ft_stack_list.c \
		src/sorting_hub.c \
		src/sorting_instructions.c \
		src/stack_init.c \
		src/stack_simplify.c \

OBJS = $(SRCS:src/%.c=obj/%.o) obj/main.o
HEADERS = inc/push_swap.h
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all:
	@echo -n "\033[31m\nCompiling...\033[0m"
	@$(MAKE) $(NAME) > /dev/null && echo -en "\r\033[32mCompiled succesfully !!\033[0m\n"

$(NAME): $(OBJS) $(HEADERS) $(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)

obj/%.o: src/%.c $(HEADERS)
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

obj/main.o: main.c $(HEADERS)
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libft

clean:
	@rm -rf obj 2> /dev/null
	@make -C libft clean > /dev/null 2>&1

fclean: clean
	@echo "\033[32m\nDeleting files\n\033[0m"
	@rm -f $(NAME) 2> /dev/null
	@make -C libft fclean > /dev/null 2>&1

re: fclean all