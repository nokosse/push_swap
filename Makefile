# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 00:21:21 by kvisouth          #+#    #+#              #
#    Updated: 2023/01/18 16:59:40 by kvisouth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#This makefile first compile every C files in /src ans main.c into .o stored in /obj created by make.
#Then it compiles the libft using the Makefile in /libft/Makefile.
#Then It's compiling with gcc -Wall -Wextra -Werror, all the files in /obj + libft.a in libft/
#Into an executable named push_swap thanks to the parameter -o in gcc.
#Very simply : it's doing 'gcc -Wall -Wextra -Werror -o push_swap <all .o> <libft.a>'

NAME = push_swap
SRCS = $(wildcard src/*.c)
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
	rm -rf obj
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all