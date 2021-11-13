/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:25:02 by mbarra            #+#    #+#             */
/*   Updated: 2021/11/13 19:25:41 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest,	char	*src, unsigned int	n)
{
	unsigned int	uns;

	uns = 0;
	while (src[uns] != '\0' && uns < n)
	{
		dest[uns] = src[uns];
		uns++;
	}
	if (uns < n && src[uns] == '\0')
	{
		while (dest[uns] != '\0')
		{
			dest[uns] = '\0';
			uns++;
		}
	}	

	return (dest);
}

// #include <stdio.h>

// char	*ft_strncpy(char	*dest,	char	*src, unsigned int	n);

// int	main(void)
// {
// 	char	p[] = "as";
// 	char	z[] = "123";

// 	ft_strncpy(p, z, 2);
// 	printf("%s\n", p);
// 	printf("%s\n", z);
// }
