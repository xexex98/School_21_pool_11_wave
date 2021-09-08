/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:11:51 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 16:59:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int	argc, char	**argv)
{
	int		i;
	int		len;
	char	*q;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 32 && argv[1][i + 1] > 32)
				q = &argv[1][i + 1];
			i++;
		}
		i = 0;
		while (q && q[i] > 32)
		{
			write(1, &q[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
