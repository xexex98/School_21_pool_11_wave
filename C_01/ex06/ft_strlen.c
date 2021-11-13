/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:25:04 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:23:56 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

// #include <stdio.h>

// int	ft_strlen(char	*str);

// int	main(void)
// {
// 	char	str[] = "12345";

// 	printf(" %d \n", ft_strlen(str));
// }
