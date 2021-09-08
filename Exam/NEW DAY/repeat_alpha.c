/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 18:19:04 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 19:12:00 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1] != '\0')
		{
			while (argv[1][i] > 'A')
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				{
					write (1, &argv[1][i], 1);
				}
				else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					write (1, &argv[1][i], 1);
				}
				i++;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
