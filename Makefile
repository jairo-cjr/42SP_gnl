# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 11:27:50 by jcaetano          #+#    #+#              #
#    Updated: 2021/10/08 17:04:16 by jcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -D BUFFER_SIZE=42 -g -Wall -Werror -Wextra

SRCS = ./test/main.c \
        get_next_line.c \
		get_next_line_utils.c

SRCS_BONUS = ./test/main.c \
        get_next_line_bonus.c \
		get_next_line_utils_bonus.c

OUTPUT = ./test/a.out

all:
	${comp} -fsanitize=address -o ${OUTPUT}

c:
	${CC} ${CFLAGS} ${SRCS}

b:
	${CC} ${CFLAGS} ${SRCS_BONUS} -o ${OUTPUT}

v: comp
	valgrind --leak-check=yes -s ${OUTPUT}

r: all
	clear
	${OUTPUT}

t:
	git clone git@github.com:Tripouille/gnlTester.git

.PHONY: all c b v r t
