/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:06:19 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:26:13 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	i;
	int	empty;

	empty = 1;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < '0' || str[i] > '9')
		{	
			return (0);
		}
		i++;
	}
	return (empty);
}

// #include <stdio.h>

// int	ft_str_is_numeric(char	*str);

// int	main(void)
// {
// 	int	a;

// 	a = ft_str_is_numeric("1231231a2413");
// 	printf("%d", a);
// }
