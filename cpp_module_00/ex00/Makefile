# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 16:05:37 by anemesis          #+#    #+#              #
#    Updated: 2022/09/20 15:07:49 by anemesis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRC			=	megaphone.cpp

OBJ			=	megaphone.o

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re