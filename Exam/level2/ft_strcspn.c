/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:38:20 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/07 20:32:47 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char	*s, const char	*reject)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (s[i])
	{
		i2 = 0;
		while (reject[i2])
		{
			if (s[i] == reject[i2])
				return (i);
			i2++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char	a[] = "1234567890";
	char	b[] = "333";

	printf("%ld", ft_strcspn(a, b));
}
