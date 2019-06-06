# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfinger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 13:34:32 by lfinger           #+#    #+#              #
#    Updated: 2019/05/23 16:10:23 by lfinger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -c -Wall -Werror -Wextra

LINKER = ar rc

SRC = $(shell ls | grep -E "ft_.+\.c")

OBJ_NAME = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC)
	$(LINKER) $(NAME) $(OBJ_NAME)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ_NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
