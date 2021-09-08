/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 19:17:47 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/06 19:40:11 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int	argc, char	**argv)
{
	int	a;
	int	b;
	int	op;
	int	result;

	result = 0;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}
