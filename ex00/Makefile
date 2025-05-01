# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mganchev <mganchev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 20:09:13 by mganchev          #+#    #+#              #
#    Updated: 2025/05/01 20:09:14 by mganchev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

SRCS = Zombie.cpp \
	   newZombie.cpp \
	   randomChump.cpp \
	   main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)
	
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
		
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)	

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all