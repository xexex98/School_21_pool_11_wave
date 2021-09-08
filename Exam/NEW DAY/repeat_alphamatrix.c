/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alphamatrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:19:04 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 22:34:01 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	j;
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
			{
				j = argv[1][i];
				while (j >= 'A')
				{
					write(1, &argv[1][i], 1);
					j--;
				}
				while (j-- >= 'a')
					write(1, &argv[1][i], 1);
				i++;
			}
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
