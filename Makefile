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
SRC	= 
OBJ	= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@$(eval CMP=$(shell echo $$(($(CMP)+1))))

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)
	$(RNBW)

clean:
	@make clean -C
	$(RM) $(OBJ)

fclean: clean
	@make fclean -C
	$(RM) $(NAME)

re: fclean all

.PHONY: 
	all clean fclean re