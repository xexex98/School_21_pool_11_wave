/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:57:23 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/02 21:12:10 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list	*begin_list)
{
	int		i;
	t_list	*list;

	i = 0;
	list = begin_list;
	while (list)
	{
		i += 1;
		list = list->next;
	}
	return (i);
}
