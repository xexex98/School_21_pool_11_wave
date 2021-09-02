/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:49:00 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/25 23:15:44 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	d;

	d = 2;
	if (nb <= 1)
		return (0);
	while (d < nb)
	{	
		if (nb % d == 0)
			return (0);
		d++;
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (0);
}
