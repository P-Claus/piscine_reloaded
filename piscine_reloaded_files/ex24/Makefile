# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pclaus <pclaus@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 13:22:18 by pclaus            #+#    #+#              #
#    Updated: 2023/10/14 14:41:28 by pclaus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS_DIR = srcs
OBJ_DIR = obj


CFLAGS = -Wall -Werror -Wextra -I./includes

SOURCES = $(wildcard $(SRCS_DIR)/*.c)
OBJECTS = $(patsubst $(SRCS_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	echo "Making the library"
	@ar rcs $(NAME) $(OBJECTS)

clean:
	echo "Removing the object directory"
	@rm -rf $(OBJ_DIR)

fclean:
	clean
	@rm $(NAME)

re:
	fclean all
