/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:04:01 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 18:54:59 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char	**tab, int(*f)(char*));

int	re(char	*str)
{
	int	j;

	j = -1;
	while (str[++j])
		if (str[j] == '0')
			return (0);
	return (1);
}

int	main(void)
{
	char	*tab[2];

	tab[1] = "0";
	printf("%d", ft_any(tab, &re));
	return (0);
}
