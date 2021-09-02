# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 17:19:11 by mbarra            #+#    #+#              #
#    Updated: 2021/08/30 11:48:59 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLD = ./src

INCLUDES = /includes/ft.h

SRCS = ./src/ft_swap.c ${FLD}/ft_strlen.c ${FLD}/ft_strcmp.c ${FLD}/ft_putstr.c ${FLD}/ft_putchar.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -fr

CFLAGS = -Wall -Wextra -Werror

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

%.o : %.c 
		gcc ${CFLAGS} -c $< -o $@ -I ${INCLUDES}
clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all clean fclean re