/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:50:55 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:15:08 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	za;

	za = 'z';
	while (za >= 'a')
	{
		ft_putchar(za);
		za--;
	}
}

// void	ft_print_reverse_alphabet(void);
// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
