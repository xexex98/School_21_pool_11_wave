# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 18:03:22 by mbarra            #+#    #+#              #
#    Updated: 2021/09/01 13:51:01 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ft_display_file.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -fr

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} : ${OBJS}
		gcc -c ${CFLAGS} ${SRCS}
		gcc ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all clean fclean re