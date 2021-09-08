/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:50:18 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 15:32:14 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
//ne rabotaet