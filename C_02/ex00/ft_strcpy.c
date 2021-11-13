/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 13:01:50 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:25:23 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// char	*ft_strcpy(char	*dest, char	*src);

// int	main(void)
// {
// 	char	p[] = "";
// 	char	z[] = "Hello";

// 	ft_strcpy(p, z);
// 	printf("%s\n", p);
// 	return (0);
// }
