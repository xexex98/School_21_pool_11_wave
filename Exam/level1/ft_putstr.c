/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:17:32 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 22:12:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// void	ft_putstr(char	*str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_putstr("   fgdgd dfg d");
// 	return (0);
// }

int	len(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	// int a;
	char a[] = "fgdgd dfg d\0";
	// a = 10;
	printf("%s", len(a));
	return (0);
}