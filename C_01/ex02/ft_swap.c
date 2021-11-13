/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 07:50:15 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:22:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int	*a, int	*b)
{
	int	swap;

	swap = *a;  //swap = 10
	*a = *b;	//a = 20
	*b = swap;	//b = 10 
}

// #include <stdlib.h>

// int	main(void)
// {
// 	int	*a;
// 	int	*b;
// 	int	x;
// 	int	y;

// 	x = 10;
// 	y = 20;
// 	printf("x = %d\n", x);
// 	printf("y = %d\n", y);
// 	a = &x;
// 	b = &y;
// 	printf("a = %d\n", *a);
// 	printf("b = %d\n", *b);
// 	ft_swap(a, b);
// 	printf("a = %d\nb = %d\n", *a, *b);
// }
