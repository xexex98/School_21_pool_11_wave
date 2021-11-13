/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:17:08 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:14:44 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	za;

	za = 'a';
	while (za <= 'z')
	{
		ft_putchar(za);
		za++;
	}
}

// void ft_print_alphabet(void); 
// int main (void)
// {
//     ft_print_alphabet();
// }