/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:01:59 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 19:11:25 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	j;

	if (argc == 2)
	{
		while (*argv[1])
		{
			if ((*argv[1] >= 'A' && *argv[1] <= 'Z')
				|| (*argv[1] >= 'a' && *argv[1] <= 'z'))
			{
				j = *argv[1];
				while (j >= 'A' && *argv[1] >= 'A' && *argv[1] <= 'Z')
				{
					write(1, argv[1], 1);
					j--;
				}
				while (j-- >= 'a' && *argv[1] >= 'a' && *argv[1] <= 'z')
					write(1, argv[1], 1);
				argv[1]++;
			}
			else
				write(1, argv[1]++, 1);
		}
	}
	write(1, "\n", 1);
}
