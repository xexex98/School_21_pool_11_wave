# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 16:25:44 by mbarra            #+#    #+#              #
#    Updated: 2021/08/29 21:50:34 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_swap.c ft_strlen.c ft_strcmp.c ft_putstr.c ft_putchar.c
ar rcs libft.a ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o ft_putchar.o