/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:31:33 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 12:35:55 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char	c)
{	
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	w;

	w = 0;
	while (str[w] != '\0')
	{
		print(str[w]);
		w++;
	}
	
}

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;
	ft_putstr(argv[0]);
	print('\n');
	return (0);
}
