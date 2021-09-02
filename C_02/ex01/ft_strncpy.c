/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:25:02 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 11:49:35 by mbarra           ###   ########.fr       */
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
