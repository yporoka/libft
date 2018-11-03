# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yporoka <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/25 13:26:05 by yporoka           #+#    #+#              #
#    Updated: 2018/04/25 14:31:58 by yporoka          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
HEADER = ./*.h
OPTION = -c -I $(HEADER)
SRC = ./*.c

OBJ = ./*.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
