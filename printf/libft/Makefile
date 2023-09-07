# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvillann <tvillann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 07:28:59 by tvillann          #+#    #+#              #
#    Updated: 2023/07/27 07:37:46 by tvillann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROJECT #
NAME	= libft.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= @rm -f
CLEAR	= @clear

# SOURCES #
SRC	= ./src/check/ft_isalnum.c\
	  ./src/check/ft_isalpha.c\
	  ./src/check/ft_isascii.c\
	  ./src/check/ft_isdigit.c\
	  ./src/check/ft_isprint.c\
	  ./src/check/ft_isspace.c\
	  ./src/list/ft_lstadd_back.c\
	  ./src/list/ft_lstadd_front.c\
	  ./src/list/ft_lstclear.c\
	  ./src/list/ft_lstdelone.c\
	  ./src/list/ft_lstiter.c\
	  ./src/list/ft_lstlast.c\
	  ./src/list/ft_lstmap.c\
	  ./src/list/ft_lstnew.c\
	  ./src/list/ft_lstsize.c\
	  ./src/memory/ft_bzero.c\
	  ./src/memory/ft_calloc.c\
	  ./src/memory/ft_memchr.c\
	  ./src/memory/ft_memcmp.c\
	  ./src/memory/ft_memcpy.c\
	  ./src/memory/ft_memmove.c\
	  ./src/memory/ft_memset.c\
	  ./src/print/ft_putchar.c\
	  ./src/print/ft_putchar_fd.c\
	  ./src/print/ft_putendl_fd.c\
	  ./src/print/ft_puthexa.c\
	  ./src/print/ft_puthexa_u.c\
	  ./src/print/ft_putnbr_base.c\
	  ./src/print/ft_putnbr_fd.c\
	  ./src/print/ft_putnbr.c\
	  ./src/print/ft_putstr.c\
	  ./src/print/ft_putstr_fd.c\
	  ./src/print/ft_putunbr.c\
	  ./src/print/ft_putunbr_base.c\
      ./src/print/ft_put_ptr.c\
	  ./src/string/ft_atoi.c\
	  ./src/string/ft_atof.c\
	  ./src/string/ft_atol.c\
	  ./src/string/ft_freesplit.c\
	  ./src/string/ft_itoa.c\
	  ./src/string/ft_nbrlen_base.c\
	  ./src/string/ft_ptr_setstring.c\
	  ./src/string/ft_split.c\
	  ./src/string/ft_strcapitalize.c\
	  ./src/string/ft_strchr.c\
	  ./src/string/ft_strcmp.c\
	  ./src/string/ft_strdup.c\
	  ./src/string/ft_striteri.c\
	  ./src/string/ft_strjoin.c\
	  ./src/string/ft_strlcat.c\
	  ./src/string/ft_strlcpy.c\
	  ./src/string/ft_strlen.c\
	  ./src/string/ft_strmapi.c\
	  ./src/string/ft_strncmp.c\
	  ./src/string/ft_strnstr.c\
	  ./src/string/ft_strrchr.c\
	  ./src/string/ft_strtrim.c\
	  ./src/string/ft_substr.c\
	  ./src/string/ft_tolower.c\
	  ./src/string/ft_toupper.c\
	  ./src/string/ft_unbrlen_base.c
OBJ	= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o  $@

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: 
	all clean fclean re
