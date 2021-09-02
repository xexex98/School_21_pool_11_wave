/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 19:10:14 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/28 14:56:20 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int	min, int	max);

int	main(void)
{
	int	i;
	int	max;
	int	min;

	i = 0;
	max = 20;
	min = -11;
	while (i < max - min)
	{
		printf("%d\t", *ft_range(min, max));
		i++;
	}
	return (0);
}
