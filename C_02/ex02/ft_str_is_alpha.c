/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 16:15:26 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:25:57 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	empty;

	i = 0;
	empty = 1;
	while (str[i] != '\0')
	{	
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (empty);
}

// #include <stdio.h>

// int	ft_str_is_alpha(char	*str);

// int	main(void)
// {
// 	int	a;

// 	a = ft_str_is_alpha("asasdfasAd1fSda");
// 	printf("%d", a);
// }
