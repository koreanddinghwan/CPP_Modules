# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myukang <myukang@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/03 17:22:13 by myukang           #+#    #+#              #
#    Updated: 2022/07/03 17:22:29 by myukang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++ -Wall -Werror -Wextra
CFLAGS = -c
STD = -std=c++98

OBJS = $(addprefix ./, megaphone.cpp)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(STD) $^ -o $@

%.o : %.c
	$(CC) $(STD) $^ -c

