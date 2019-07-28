# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 19:31:10 by pvongdar          #+#    #+#              #
#    Updated: 2019/07/22 19:31:14 by pvongdar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY = all clean
CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJECTS = *.o
INCLUDES = includes/*.h
SRC = srcs/*.c

all: compile

compile:
	@echo "creating library..."
	@$(CC) $(CFLAGS) -I $(INCLUDES) -c $(SRC)
	@ar -rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "libft.a"

clean:
	@echo "cleaning..."
	@/bin/rm -f $(OBJECTS)
	@echo "complete"

fclean: clean
	@echo "full cleaning..."
	@/bin/rm -f $(NAME)
	@echo "complete"

re: fclean all
	@echo "resetting..."
	make
	@echo "reset complete"