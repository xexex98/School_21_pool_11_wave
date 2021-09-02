/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:46:49 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/28 14:56:18 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*mem;
	int	i;

	if (max - min < 0)
		return (NULL);
	else if (min >= max)
		return (NULL);
	i = 0;
	mem = (int *)malloc((max - min) * sizeof(*mem));
	if (mem == NULL)
		return (NULL);
	while (min < max)
	{
		mem[i] = min;
		i++;
		min++;
	}
	return (mem);
}
