/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:58:31 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 12:36:11 by mbarra           ###   ########.fr       */
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

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		print('\n');
	}
	return (0);
}
