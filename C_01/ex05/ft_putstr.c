/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 08:54:31 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:23:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char	c)
{	
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
{
	int	w;

	w = 0;
	while (str[w] != '\0')
	{
		print(str[w]);
		w++;
	}
}

// #include <unistd.h>

// void	ft_putstr(char	*str);

// int	main(void)
// {
// 	char	text[] = "Hello World!";
// 	ft_putstr(text);
// 	return (0);
// }
