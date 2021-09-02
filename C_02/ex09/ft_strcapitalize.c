/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 22:36:02 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/21 23:20:27 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char	*str)
{
	int	i;
	
    if (str[0] != '\0' && str[0] >= 'a' && str[0] <='z')
        {  
            str[0] = str[0] + 32;
        }
    i = 1;
    while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
				i++;
			}
	}
    return	(str);
}

int	main(void)
{
	char	a[] = "aSDAS";
	printf("%s", ft_strcapitalize(a));
}
