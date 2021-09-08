/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:27:59 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 17:31:26 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int	*tab, unsigned int	len)
{
	int	i;
	int	max;

	max = 0;
	if (tab)
	{
		i = 0;
		max = 0;
		while (i < len)
		{	
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
	}
	return (max);
}

// int	main(void)
// {
// 	int	i[] = {};
// 	int	len;

// 	len = 0;
// 	printf("%d", max(i, len));
// 	return (0);
// }
