# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: todinh <todinh@student.42prague.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 20:10:14 by todinh            #+#    #+#              #
#    Updated: 2023/10/18 20:52:44 by todinh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a
LIBH = libft.h
CC = gcc
FILES = ft_atoi.c
CFLAG = -Wall -Wextra -Werror
OBJ = $(FILES:.c=.o)

all: $(NAME)
$(NAME): $(OBJ) $(LIBH)
	$(CC) $(CFLAG) -c $(FILES) -I $(LIBH)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all