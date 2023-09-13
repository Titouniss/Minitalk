# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 12:50:21 by tvillann          #+#    #+#              #
#    Updated: 2023/09/05 12:50:21 by tvillann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROJECT
NAME	= minitalk
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
RM		= @rm -f
CLEAR	= @clear
FILE	= $(shell ls -l src/ | grep -F .c | wc -l)
CMP		= 1

#FILE
SERVER_SRC = server.c
CLIENT_SRC = client.c
SERVER_OBJ	= $(SERVER_SRC:.c=.o)
CLIENT_OBJ	= $(CLIENT_SRC:.c=.o)

# LIBFT
PRINT_PATH	= ./printf --no-print-directory
PRINT_NAME	= ./printf/libftprintf.a

all: $(PRINT_NAME) client server

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))
	
$(PRINT_NAME):
	@make -C $(PRINT_PATH)

client: $(CLIENT_OBJ)
	$(CC) $(CLIENT_OBJ) $(CFLAGS) $(PRINT_NAME) -o client

server: $(SERVER_OBJ)
	$(CC) $(SERVER_OBJ) $(CFLAGS) $(PRINT_NAME) -o server

clean:
	@make clean -C $(PRINT_PATH)
	$(RM) $(CLIENT_OBJ) $(SERVER_OBJ)

fclean: clean
	@make fclean -C $(PRINT_PATH)
	$(RM) client server

re: fclean all

.PHONY: 
	all clean fclean re
