/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:16:42 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 23:12:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				|| (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
			{
				argv[1][i] = argv[1][i] + 1;
				write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] == 'Z')
				write(1, "A", 1);
			else if (argv[1][i] == 'z')
				write(1, "a", 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
