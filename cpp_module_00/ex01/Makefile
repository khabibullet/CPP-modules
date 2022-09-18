# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anemesis <anemesis@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 17:52:29 by anemesis          #+#    #+#              #
#    Updated: 2022/09/18 18:02:15 by anemesis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

HEADERS		=	headers/*

SRCDIR		=	sources

OBJDIR		=	objects

SRC			=	$(wildcard $(SRCDIR)/*.c) $(wildcard $(SRCDIR)/*/*.c)

OBJ			=	$(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

INC			=	-I ./headers -I ./libraries/libft -I ./libraries/libmlx

# **************************************************************************** #

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(INC) $(LIB_FT) $(LIB_MLX) $^ -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.c $(LIBS) $(HEADERS)
	@mkdir -p $(OBJDIR)
	@mkdir -p $(@:/$(notdir $@)=)
	$(CC) $(FLAGS) -c $< -o $@

$(LIBS) :
	make -C libraries/libft
	make -C libraries/libmlx

clean :
	rm -rf $(OBJDIR)
	make clean -C libraries/libft
	make clean -C libraries/libmlx

fclean : clean
	rm -f $(NAME)
	make fclean -C libraries/libft
	make fclean -C libraries/libmlx

re : fclean all

.PHONY : all clean fclean re