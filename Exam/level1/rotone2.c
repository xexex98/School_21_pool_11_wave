/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:47:07 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/05 22:51:30 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;

	if (argc == 2)
	{
		while (*argv[1])
		{
			if ((*argv[1] >= 'A' && *argv[1] <= 'Y')
				|| (*argv[1] >= 'a' && *argv[1] <= 'y'))
			{
				*argv[1] = *argv[1] + 1;
				write(1, argv[1], 1);
			}
			else if (*argv[1] == 'Z')
				write(1, "A", 1);
			else if (*argv[1] == 'z')
				write(1, "a", 1);
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
