# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 11:27:50 by jcaetano          #+#    #+#              #
#    Updated: 2021/10/08 13:42:28 by jcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -D BUFFER_SIZE=42 -g -Wall -Werror -Wextra

SRCS = ./test/main.c \
        get_next_line.c \
		get_next_line_utils.c

OUTPUT = ./test/a.out

all:
	${comp} -fsanitize=address -o ${OUTPUT}

comp:
	${CC} ${CFLAGS} ${SRCS}

val: comp
	valgrind --leak-check=yes -s ${OUTPUT}

run: all
	clear
	${OUTPUT}

.PHONY: all val run comp
