/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 20:47:16 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:27:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	empty;

	empty = 1;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 32 || str[i] > 127)
		{	
			return (0);
		}
		i++;
	}
	return (empty);
}

// #include <stdio.h>

// int	ft_str_is_printable(char	*str);

// int	main(void)
// {
// 	int	a;

// 	a = ft_str_is_printable(".adasd");
// 	printf("%d", a);
// }
