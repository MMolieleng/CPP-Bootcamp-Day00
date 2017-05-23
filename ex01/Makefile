# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/23 13:52:55 by mmoliele          #+#    #+#              #
#    Updated: 2017/05/23 14:52:07 by mmoliele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXE     = phonebook
CFLAGS  = -Wall -Wextra -Werror
CLANG   = clang++
SRC     = main.cpp Contact.class.cpp Phonebook.class.cpp
INCLUDE = ./
OBJ     = $(SRC:.cpp=.o)
	
all:
	    $(CLANG) $(SRC) -I$(INCLUDE) -o $(EXE)
clean:
	    rm -f $(OBJ)
fclean: clean
	    rm -f $(EXE)
re: fclean all
