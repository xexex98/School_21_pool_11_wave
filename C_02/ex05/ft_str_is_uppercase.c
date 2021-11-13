/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:42:05 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:26:52 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	int	i;
	int	empty;

	empty = 1;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'A' || str[i] > 'Z')
		{	
			return (0);
		}
		i++;
	}
	return (empty);
}

// #include <stdio.h>

// int	ft_str_is_uppercase(char	*str);

// int	main(void)
// {
// 	int	a;

// 	a = ft_str_is_uppercase("ADASD");
// 	printf("%d", a);
// }
