# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 13:13:41 by mbarra            #+#    #+#              #
#    Updated: 2021/09/05 14:17:26 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Rush-02

SRCS = ft_atoi.c ft_putnbr.c ft_putstr.c  main.c 

CC = gcc
RM = rm -fr

CFLAGS = -Wall -Wextra -Werror

OBJS := $(patsubst %.c, %.o, $(SRCS))

all: ${NAME}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o : %.c
		$(CC) -c $(FLAGS) $< -o $@ 

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all clean fclean re