/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:06:30 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 15:38:55 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check(char *str, char	c, int	pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char	*argv1, char	*argv2)
{
	int	i;
	int	j;

	i = 0;
	while (argv1[i])
	{
		j = 0;
		while (argv2[j])
		{
			if (argv1[i] == argv2[j])
			{
				if (check(argv1, argv1[j], i))
				{
					write(1, &argv1[i], 1);
					break ;
				}
			}
			j++;
		}
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return (0);
}
