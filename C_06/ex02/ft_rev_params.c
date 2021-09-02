/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 12:12:33 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/26 19:54:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		print(str[i]);
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[argc - i]);
		i++;
		print('\n');
	}
}
