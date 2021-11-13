/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 21:35:21 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:15:41 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{	
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

// void	ft_is_negative(int i);
// int	main(void)
// {
// 	ft_is_negative(0);
// 	return (0);
// }
