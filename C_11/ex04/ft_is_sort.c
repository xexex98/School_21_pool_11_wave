/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:40:00 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 18:56:23 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			j++;
		i++;
	}
	if (j == length - 1)
		return (1);
	i = 0;
	j = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			j++;
		i++;
	}
	if (j == length - 1)
		return (1);
	return (0);
}

int	func(int	a,	int	b)
{
	return (a - b);
}
