/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:34:21 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 22:49:27 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}	

char	*ft_strdup(char	*src)
{
	char	*tab;

	tab = (char *)malloc(sizeof(*tab) * (ft_strlen(src) + 1));
	tab = src;
	return (tab);
}
