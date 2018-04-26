# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/14 12:34:01 by WSeegers          #+#    #+#              #
#    Updated: 2018/04/26 22:40:40 by wseegers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = $(wildcard ft_*.c)
OBJ := $(addprefix ./.obj/,$(SRC:.c=.o))
CC = clang
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $@ $?
	ranlib $(NAME)

./.obj/%.o : %.c libft.h
	$(CC) $(CFLAGS) -fpic -c $< -o $@

so : $(OBJ)
	gcc -shared -o libft.so $?

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f libft.so

re : fclean all
