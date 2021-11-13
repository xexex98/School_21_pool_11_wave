/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 22:25:21 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:27:34 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'A' && str[i] <= 'Z')
		{	
			str[i] = str[i] + 32;
			i++;
		}
	}
	return (str);
}

// #include <stdio.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	char	a[] = "AAasd";
// 	printf("%s", ft_strlowcase(a));
// }
