# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jadawson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/03 23:56:36 by jadawson          #+#    #+#              #
#    Updated: 2018/03/04 00:00:40 by jadawson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

SOURCES = $(wildcard ft_*.c)
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SOURCES)
	ar rc $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
