# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 17:52:29 by anemesis          #+#    #+#              #
#    Updated: 2022/09/19 13:00:52 by anemesis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

HEADERS		=	headers/*

SRCDIR		=	sources

OBJDIR		=	objects

SRC			=	$(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/*/*.cpp)

OBJ			=	$(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

INC			=	-I ./headers
# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(INC) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp $(HEADERS)
	mkdir -p $(OBJDIR)
	mkdir -p $(@:/$(notdir $@)=)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re