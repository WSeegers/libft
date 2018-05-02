# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: WSeegers <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/14 12:34:01 by WSeegers          #+#    #+#              #
#    Updated: 2018/05/02 11:55:02 by wseegers         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
NAME_SO = libft.so
SRC = $(wildcard ft_*.c)
O_PATH = ./.obj/
OBJ := $(addprefix $(O_PATH),$(SRC:.c=.o))
SO_PATH = ./.obj_so/
SO_OBJ :=  $(addprefix $(SO_PATH),$(SRC:.c=.o))
CC = clang
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME) : $(OBJ)
	ar rc $@ $?
	ranlib $(NAME)

$(O_PATH)%.o : %.c libft.h
	@mkdir -p $(O_PATH)
	$(CC) $(CFLAGS) -c $< -o $@

so : $(NAME_SO)

$(NAME_SO) : $(SO_OBJ)
	gcc -shared -o libft.so $?

$(SO_PATH)%.o : %.c libft.h
	@mkdir -p $(SO_PATH)
	$(CC) $(CFLAGS) -fpic -c $< -o $@

clean :
	rm -f $(OBJ) $(SO_OBJ)

fclean : clean
	rm -f $(NAME) $(NAME_SO)

re : fclean all
