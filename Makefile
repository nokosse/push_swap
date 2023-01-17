# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 18:20:21 by kvisouth          #+#    #+#              #
#    Updated: 2023/01/17 19:05:21 by kvisouth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = src/check_args.c src/check_args2.c
OBJECTS = $(SOURCES:src/%.c=obj/%.o)

EXEC = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Ilibft/inc

LIBFT = libft/libft.a

all: $(EXEC)

$(EXEC): $(OBJECTS) $(LIBFT)
	$(CC) $(OBJECTS) $(LIBFT) -o $(EXEC)

$(OBJECTS): obj/%.o : src/%.c
	mkdir -p obj/
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	make -C libft/

clean:
	make -C libft/ clean
	rm -f $(OBJECTS)

fclean: clean
	make -C libft/ fclean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re