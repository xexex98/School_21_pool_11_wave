/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:28:04 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 21:11:31 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char	**tab, int	length, int(*f)(char*));

int	len(char	*str)
{
	int	j;

	j = -1;
	while (str[++j])
		if (str[j] != '0')
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	printf("%d", ft_count_if(argv + 1, argc, &len));
}
