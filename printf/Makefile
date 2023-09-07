# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 07:38:28 by tvillann          #+#    #+#              #
#    Updated: 2023/07/27 07:38:52 by tvillann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROJECT
NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
RM		= @rm -f
CLEAR	= @clear

#FILE
SRC	= ./src/ft_printf.c ./src/ft_format.c
OBJ	= $(SRC:.c=.o)

# LIBFT
LIBFT_PATH	= ./libft --no-print-directory
LIBFT_NAME	= ./libft/libft.a

all: $(LIBFT_NAME) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
$(LIBFT_NAME):
	@make -C $(LIBFT_PATH)

$(NAME): $(OBJ) 
	@ar rcsT $(NAME) $(OBJ) $(LIBFT_NAME)

clean:
	@make clean -C $(LIBFT_PATH)
	$(RM) $(OBJ)

fclean: clean
	@make fclean -C $(LIBFT_PATH)
	$(RM) $(NAME)

re: fclean all

.PHONY: 
	all libftmake clean fclean re
