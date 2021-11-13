/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:15:07 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:15:20 by mbarra           ###   ########.fr       */
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

// void	ft_print_numbers(void);
// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
