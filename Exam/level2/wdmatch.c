/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:25:51 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 17:08:59 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
		write(1, str++, 1);
}		

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int	argc, char **argv)
{
	int	i;
	int j;
	int	lenght;

	j = 0;
	i = 0;
	lenght = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					lenght++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (lenght == ft_strlen(argv[1]))
			ft_putstr(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}
