/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 20:37:21 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 23:26:40 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char	*str);
void	ft_putnbr(int	nb);
void	ft_putstr(char	*str);

void	print(char c)
{
	write (1, &c, 1);
}

int	num(char	*str)
{
	int	i;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	return (0);
}

void	ft_calc(char	**argv, char *op)
{
	if (*op == '+')
		ft_putnbr(ft_atoi(argv[1]) + ft_atoi(argv[3]));
	else if (*op == '-')
		ft_putnbr(ft_atoi(argv[1]) - ft_atoi(argv[3]));
	else if (*op == '*')
		ft_putnbr(ft_atoi(argv[1]) * ft_atoi(argv[3]));
	else if (num(argv[3]) == 0)
		ft_putnbr(0);
	else if (*op == '/')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(ft_atoi(argv[1]) / ft_atoi(argv[3]));
	}
	else if (*op == '%')
	{
		if (ft_atoi(argv[3]) == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(ft_atoi(argv[1]) % ft_atoi(argv[3]));
	}
	else
		ft_putnbr(0);
}

int	main(int	argc, char	**argv)
{
	int		a;
	int		b;
	char	*op;

	op = argv[2];
	if (argc != 4)
		return (0);
	ft_calc(argv, op);
	write(1, "\n", 1);
	return (0);
}
