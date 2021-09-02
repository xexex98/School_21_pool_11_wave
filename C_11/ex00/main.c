/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:59:49 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 18:48:16 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int	*tab, int	length, void(*f)(int));

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

int	main(void)
{
	int	tab[11];
	int	i;

	i = 0;
	while (i <= 10)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
