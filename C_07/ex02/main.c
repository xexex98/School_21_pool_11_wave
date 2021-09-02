/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 23:05:22 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 23:21:59 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int	**range,	int	min, int	max);

int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("%d\n", ft_ultimate_range(&range, -5, 5));
	while (i < 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
