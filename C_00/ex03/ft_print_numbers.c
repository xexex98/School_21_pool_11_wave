/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:15:07 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/19 21:35:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	n;

	n = '1';
	while (n <= '9')
	{
		ft_putchar(n);
		n++;
	}
}
