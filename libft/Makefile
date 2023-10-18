# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 20:10:14 by todinh            #+#    #+#              #
#    Updated: 2023/10/18 23:27:08 by todinh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
LIBFT = libft.h
FILES = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
CC = gcc
CFLAG = -Wall -Wextra -Werror
OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c $(LIBFT)
	$(CC) $(CFLAG) -c $< -o $@ -I.

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all