# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 17:52:29 by anemesis          #+#    #+#              #
#    Updated: 2022/10/03 19:27:13 by anemesis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	main

SRCDIR		=	sources

OBJDIR		=	objects

SRC			=	$(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/*/*.cpp)

OBJ			=	$(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror
# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS)$^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	mkdir -p $(@:/$(notdir $@)=)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re