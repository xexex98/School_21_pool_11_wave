/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:43:51 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:26:38 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;
	int	empty;

	empty = 1;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'a' || str[i] > 'z')
		{	
			return (0);
		}
		i++;
	}
	return (empty);
}

// #include <stdio.h>

// int	ft_str_is_lowercase(char	*str);

// int	main(void)
// {
// 	int	a;

// 	a = ft_str_is_lowercase("aasd1aa");
// 	printf("%d", a);
// }
