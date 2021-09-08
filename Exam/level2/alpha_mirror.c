/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:43:11 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/06 19:39:50 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int	argc, char	**argv)
{
	if (argc == 2)
	{
		while (*argv[1])
		{
			if (*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				*argv[1] = 'M' - (*argv[1] - 'N');
			}
			else if (*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				*argv[1] = 'm' - (*argv[1] - 'n');
			}
			write(1, argv[1]++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
