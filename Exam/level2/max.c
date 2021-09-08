/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:59:39 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 17:32:14 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int	*tab, unsigned	int	len)
{
	int	i;
	int	max;

	i = 0;
	max = tab[0];
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// int	main(void)
// {
// 	int	i[] = {};
// 	int	len;

// 	len = 1;
// 	printf("%d", max(i, len));
// 	return (0);
// }
