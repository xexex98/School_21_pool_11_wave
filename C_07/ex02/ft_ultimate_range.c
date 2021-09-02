/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 23:02:20 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 23:23:26 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int	**range,	int	min, int	max)
{
	int	*mem;
	int	i;

	*range = NULL;
	if (max - min < 0)
		return (NULL);
	else if (min >= max)
		return (NULL);
	i = 0;
	mem = NULL;
	mem = (int *)malloc((max - min) * sizeof(*mem));
	*range = mem;
	while (min < max && mem != NULL)
	{
		mem[i++] = min++;
	}
	if (*range == NULL)
		return (-1);
	return (sizeof(mem));
}
