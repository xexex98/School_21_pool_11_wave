/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:17:43 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/22 22:58:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

char	*ft_strcat(char	*dest, char	*src);

int	main(void)
{
	char	dest[] = "bcd";
	char	src[] = "321";

	printf("%s", ft_strcat(dest, src));
	return (0);
}
