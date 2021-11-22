# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maearly <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 18:48:07 by maearly           #+#    #+#              #
#    Updated: 2021/11/21 18:48:08 by maearly          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= c++
CFLAGS		= -Wall -Wextra -Werror
NAME		= test
SRCS		= Account.cpp tests.cpp
OBJS		= $(SRCS:%.cpp=%.o)

#GREEN		= [1;32m
#RESET		= [0m

all: $(NAME)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
	@echo "Built target $(NAME)"

clean:
	@-rm -rf $(OBJS)

fclean: clean
	@-rm -f $(NAME)

re: fclean all

run:
	./$(NAME)

.PHONY: all clean fclean re run
