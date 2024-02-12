# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uasci <uasci@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 07:41:34 by uasci             #+#    #+#              #
#    Updated: 2024/01/18 07:41:35 by uasci            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp ZombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
CC = g++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
