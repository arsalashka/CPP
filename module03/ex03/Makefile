# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maearly <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/20 17:07:52 by maearly           #+#    #+#              #
#    Updated: 2021/11/20 17:07:54 by maearly          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    =   clapTrap
SRC     =   $(wildcard *.cpp)
HDRS    =   $(wildcard *.hpp)
OBJ     =   $(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror -std=c++98 $(addprefix -I , $(HDRS))
FLAGS2	=	-Wshadow -Wno-shadow
CC      =   c++

%.o : %.cpp
	$(CC) $(FLAFS)-c $< -o $@

$(NAME):	$(OBJ) $(HDRS)
			$(CC) $(FLAGS) $(FLAGS2) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: all re clean fclean
