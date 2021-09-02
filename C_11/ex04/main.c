/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:40:03 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 21:16:53 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	func(int	a,	int	b)
{
	return (a - b);
}

int	main(void)
{
	int	tab[] = {-7, -7, -7, -7, -7, -7, -7};
	int	length;

	length = 6;
	printf("%d\n", ft_is_sort(tab, length, &func));
	return (0);
}
