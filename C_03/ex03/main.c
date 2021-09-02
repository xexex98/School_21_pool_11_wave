/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:31:03 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 12:15:01 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main(void)
{
	char	str1[] = "asdasd";
	char	str2[] = "asd";

	printf("%s", ft_strncmp(str1, str2, 2));
}
