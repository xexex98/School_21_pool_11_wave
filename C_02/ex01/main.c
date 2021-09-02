/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:13:33 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 11:51:36 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char	*dest,	char	*src, unsigned int	n);

int	main(void)
{
	char	p[] = "as";
	char	z[] = "123";

	ft_strncpy(p, z, 2);
	printf("%s\n", p);
	printf("%s\n", z);
}
