/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:55:48 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 12:19:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	res;
	int	i;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}
