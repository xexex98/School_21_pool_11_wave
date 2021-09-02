/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:21:12 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 01:51:28 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main(void)
{
	char	str1[] = "asdasd";
	char	str2[] = "asd12312";

	printf("%d", ft_strncmp(str1, str2, 5));
}
