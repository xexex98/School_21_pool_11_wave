/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 08:13:46 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:22:22 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*a;
// 	int	*b;
// 	int	div;
// 	int	mod;

// 	a = &div;
// 	b = &mod;
// 	ft_div_mod(12, 5, a, b);
// 	printf("a = %d\nb = %d\n", a, *b);
// }
