/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 12:59:17 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 14:49:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
	char	*r;
	int		len;
	int		i;

	i = 0;
	len = lenght(str);
	r = (char *)malloc(sizeof(r) * (len + 1));
	printf("%lu\n", sizeof(r));
	if (r == NULL)
		return (NULL);
	while (str[i])
	{
		r[i] = str[len - 1];
		i++;
		len--;
	}
	r[i] = '\0';
	return (r);
}

// int	main(void)
// {
// 	char	a[] = "olleh";

// 	printf("%s", ft_strrev(a));
// 	return (0);
// }
