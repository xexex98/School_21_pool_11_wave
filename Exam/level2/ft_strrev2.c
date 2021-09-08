/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:20:04 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 14:49:49 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	lenght(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char	*str)
{
	int		i;
	int		len;
	char	a;

	i = 0;
	len = lenght(str);
	while (len > i)
	{
		a = str[i];
		str[i] = str[len - 1];
		str[len - 1] = a;
		i++;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	char	a[] = "olleh";

// 	printf("%s", ft_strrev(a));
// 	return (0);
// }
