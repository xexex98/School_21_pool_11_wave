/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 12:52:30 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/29 15:25:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print(char	c)
{
	write(1, &c, 1);
}

void	string(char	*str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int	argc, char	**argv)
{
	int	i;
	
	i = 1;
	while (i < argc)
	{
		string(argv[i]);
		i++;
		string(" ");
	}
	if (argv[1] == 12)
		printf("мой аргумент %s\n", argv[1]);	
	
		return (0);
}

//проверка эллеманта массива argv[1] на значение равное 4

// {
// 	if (argv[1][1] = 4)
// 		print(1, &argv[1][1])
// 	else 
// 		return(0);

// }
