/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:15:00 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 12:10:57 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int	nb)
{	
	int	divider;

	divider = 10;
	if (nb == -2147483648)
	{
		print('-');
		print('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		print('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / divider);
		ft_putnbr(nb % divider);
	}
	else
		print (nb + '0');
}
