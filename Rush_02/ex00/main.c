/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 13:21:40 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/05 15:25:07 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_list.h"
#include "ft_libs.h"

typedef struct s_list
{
	int				key;
	char			*val;
	struct s_list	*next;
}				t_list;

void	convertdic(char	*filename)
{
	int		fd;
	char	buf[1];
	char	*voc;

	fd = open(filename, O_RDONLY);
	
	while (read(fd, buf, 1))
	{
		write(1, buf, 1); 
	}
	
}

// void	convertnum(char	*str)
// {

// }


int	main(int	argc, char	**argv)
{
	char	*dict;

	if (argc == 2)
	{
		convertnum(argv[1]);
	}
	// else if (argc == 3)
	// {
	// 	convertdic(argv[1]);
	// 	convertnum(argv[2]);
	// }
	else
		return (0);
}
 