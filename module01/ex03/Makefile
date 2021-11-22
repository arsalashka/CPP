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

NAME    =   weapon
SRC     =   $(wildcard *.cpp)
HDRS    =   $(wildcard *.hpp)
OBJ     =   $(SRC:.cpp=.o)
FLAGS	=	-Wall -Wextra -Werror -std=c++98 $(addprefix -I , $(HDRS))
CC      =   c++

%.o : %.cpp
	$(CC) $(FLAFS)-c $< -o $@

$(NAME):	$(OBJ) $(HDRS)
			$(CC) $(FLAGS) $(SRC) -o $(NAME)

all:		$(NAME)

clean:
			rm -rf $(OBJ)

fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: all re clean fclean
