/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:45:01 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 12:37:32 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	strsize(char	*a1, char	*a2)
{
	int	i;

	i = 0;
	while (a1[i] != '\0' && a2[i] != '\0')
	{
		if (a1[i] == a2[i])
			i++;
		if (a1[i] < a2[i] || a1[i] > a2[i])
			return (a1[i] - a2[i]);
	}
	return (0);
}

void	ft_sort_params(int	i, char	**arg)
{
	ft_putstr(arg[i]);
	ft_putstr("\n");
}

int	main(int	argc, char	**argv)
{
	char	*swap;
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		if (strsize(argv[i], argv[i + 1]) > 0)
		{
			swap = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swap;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_sort_params(i, argv);
		i++;
	}
	return (0);
}
