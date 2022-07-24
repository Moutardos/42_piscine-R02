# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asaleem <asaleem@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/24 18:40:56 by asaleem           #+#    #+#              #
#    Updated: 2022/07/24 18:41:02 by asaleem          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
EXEC = rush-02
SRC = main.c dictionary.c display.c gestion.c neo_number.c search.c translation.c utility.c condition.c
OBJ = $(SRC:.c=.o)

NAME = main.o dictionary.o display.o gestion.o neo_number.o search.o translation.o utility.o condition.o
RM = rm -f
CFLAGS = -Wall -Wextra  -o 

all: $(EXEC)

%.o : %.c
	$(CC) $(CFLAGS) $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) $(CFLAGS) $@ $^

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) $(EXEC)

re: fclean all

.PHONY: all clean fclean re
