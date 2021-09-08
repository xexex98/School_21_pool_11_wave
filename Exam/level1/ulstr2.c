/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:52:49 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/06 21:51:54 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				*argv[1] = *argv[1] - 32;
				write(1, argv[1], 1);
			}
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*argv[1] = *argv[1] + 32;
				write(1, argv[1], 1);
			}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
