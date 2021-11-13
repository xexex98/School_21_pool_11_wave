/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:28:15 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:17:27 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(int i)
{
	while (i <= 9)
	{
		ft_putchar(i);
		i++;
	}
}

// void	ft_print_comb(int i);
// int	main(void)
// {
// 	ft_print_comb(5);
// 	return(0);
// }
