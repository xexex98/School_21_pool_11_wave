/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:05:31 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 14:57:53 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	i;
	int	*ptri;

	i = 'z';
	ptri = &i;
	while (*ptri > 'a')
	{
		write(1, ptri, 1);
		*ptri = *ptri - 33;
		write(1, ptri, 1);
		*ptri += 31;
	}
	write(1, "\n", 1);
	return (0);
}
