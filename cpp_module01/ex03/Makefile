# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myukang <myukang@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 19:13:04 by myukang           #+#    #+#              #
#    Updated: 2022/07/07 21:11:57 by myukang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=simulation
CCP = c++ -Wall -Werror -Wextra -g3
CFLAGS = -c
STD = -std=c++98

SRCS = $(addprefix ./, main.cpp Weapon.cpp HumanA.cpp HumanB.cpp)
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CCP) $(STD) $^ -o $@

%.o : %.c
	$(CCP) $(STD) $^ -c

clean :
	rm -rf $(OBJS)

fclean :
	make clean;
	rm -rf $(NAME);

re :
	make fclean;
	make all;

.PHONY : all clean fclean re
