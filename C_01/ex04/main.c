/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 09:01:27 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/21 09:27:14 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_ultimate_div_mode(int	*a, int	*b);

int	main(void)
{
	int	*a;
	int	*b;
	int	x;
	int	y;

	x = 15;
	y = 14;
	a = &x;
	b = &y;
	ft_ultimate_div_mode(a, b);
	printf("a = %d\nb = %d\n", *a, *b);
}
