/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:09:07 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/06 17:20:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char	*c)
{
	while (*c)
		write(1, c++, 1);
}

void	swap(char	*a, char	*b)
{
	char	*tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

char	*rev_print(char	*c)
{
	int	i;
	int	len;

	i = 0;
	while ((*(c + i)) != '\0')
		i++;
	len = i - 1;
	i = 0;
	printf("");
	while (i < (len - i))
	{
		swap((c + i), (c + len - i));
		i++;
	}
	ft_putstr(c);
	return (c);
}

int	main(int	argc, char	**argv)
{
	if (argc == 2)
		printf("%s", rev_print(*(argv + 1)));
	write(1, "\n", 1);
	return (0);
}
