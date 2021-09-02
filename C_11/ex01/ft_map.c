/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:30:33 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 21:16:03 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int	*tab, int	length, int(*f)(int))
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(sizeof(array) * length);
	if (array == NULL)
		return (0);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}
