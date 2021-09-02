/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:54:59 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/02 21:07:30 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_putstr(char	*str)
{
	while (*str)
		wtite(1, str++, 1);
}

void	ft_show_tab(t_list	*par)
{
	int	i;

	ft_putstr((char *)par->data);
	write(1, "\n", 1);
}

int	main(void)
{	
	char	*data = "Hello World!";
	t_list	*list;

	list = ft_create_elem((void *)data);
	ft_show_tab(list);
}
