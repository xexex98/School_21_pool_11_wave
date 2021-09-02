/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 20:30:30 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 21:16:34 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_map(int	*tab, int	length, int(*f)(int));

int	func(int	n)
{
	return (n * n);
}

int	main(void)
{
	int	lenght;
	int	tab[5] = {1, 4, 9, 16, 5};
	int	*a;

	lenght = 5;
	a = ft_map(tab, lenght, &func);
	while (lenght != 0)
	{
		printf("%d\n", *a++);
		lenght--;
	}
}
