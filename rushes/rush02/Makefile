# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 11:23:08 by pvongdar          #+#    #+#              #
#    Updated: 2019/07/28 19:34:55 by pvongdar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = main
CC = gcc
WWW = -Wall -Wextra -Werror
OBJ = *.o
SRC = main.c

all: compile

compile:
	@$(CC) $(WWW) $(SRC) -o $(NAME)
	@$(CC) $(WWW) -c $(SRC)
	@echo "$(NAME)"


clean:
	@/bin/rm -f $(OBJ)
	@echo "cleaning complete"



fclean: clean
	@/bin/rm -f $(NAME)
	@echo "files are back to original"
