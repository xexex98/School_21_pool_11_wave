# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 18:22:43 by mbarra            #+#    #+#              #
#    Updated: 2021/08/31 19:54:18 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_cat

SRCS = ft_cat.c

OBJS = ${SRCS:.c=.o}

CC = gcc
RM = rm -fr

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME} :
		gcc -c ${CFLAGS} ${SRCS}
		gcc ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME} 

re:	fclean all

.PHONY: all clean fclean re