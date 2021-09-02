/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:53:47 by meperry           #+#    #+#             */
/*   Updated: 2021/08/25 13:32:51 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	print_A(int x, int y, int b)
{
	if (x + y == 0)
	{
		return (1);
	}
	else if (x - y == -b)
	{
		return (1);
	}
	return (0);
}

int	print_C(int x, int y, int a, int b)
{
	if (x - y == a)
	{
		return (1);
	}
	else if (x + y == a + b)
	{
		return (1);
	}
	return (0);
}

int	print_B(int x, int y, int a, int b)
{
	if (x == 0)
	{
		return (1);
	}
	else if (x == a)
	{
		return (1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == b)
	{
		return (1);
	}
	return (0);
}

void	print_symbol(int x, int y, int a, int b)
{
	if (print_A(x, y, b))
	{
		ft_putchar('A');
	}
	else if (print_C(x, y, a, b))
	{
		ft_putchar('C');
	}
	else if (print_B(x, y, a, b))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int a, int b)
{
	int	x;
	int	y;

	if (a > 0 && b > 0)
	{
		a -= 1;
		b -= 1;
		x = 0;
		y = 0;
		while (y <= b)
		{
			while (x <= a)
			{
				print_symbol(x, y, a, b);
				x++;
			}
			ft_putchar('\n');
			x = 0;
			y++;
		}
	}
}
