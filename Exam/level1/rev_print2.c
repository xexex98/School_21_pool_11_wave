/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:19:22 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 22:43:11 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int	main(int	argc, char	**argv)
{
	int	i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1] + 1);
		while (i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
	return (0);
}
