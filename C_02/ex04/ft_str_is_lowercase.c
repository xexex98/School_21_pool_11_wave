/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 19:43:51 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/21 21:21:23 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	i;
	int	empty;

	empty = 1;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 'a' || str[i] > 'z')
		{	
			return (0);
		}
		i++;
	}
	return (empty);
}
