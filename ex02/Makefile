#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/05 11:30:34 by abouvier          #+#    #+#              #
#    Updated: 2015/11/26 11:22:41 by esusseli         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = identify
SRC = main.cpp
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -w
OBJ = $(SRC:.cpp=.o)
HEADER = 

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $^

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(OUTPUT_OPTION) $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
