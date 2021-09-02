/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:05:14 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/31 19:54:17 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <libgen.h>

int	len(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (*str)
		write(1, str++, 1);
	write(2, ": ", 3);
}

void	error(char	*argv)
{
	write(2, argv, len(argv));
	write(2, ": ", 3);
	write(2, strerror(errno), len(strerror(errno)));
	write(2, "\n", 2);
}

int	cat(int	argc, char	**argv)
{
	int		fd;
	char	buf[30];
	int		i;
	int		rd;

	i = 1;
	ft_putstr(basename(*argv));
	while (i < argc)
	{	
		fd = open(argv[i], O_RDONLY, 0);
		if (fd == -1)
			error(argv[i]);
		else
		{
			rd = read(fd, buf, 0);
			if (rd == -1)
				error(argv[i]);
			else
				while (read(fd, buf, 1))
					write(1, buf, 1);
		}
		i++;
	}
	close (fd);
	return (0);
}

int	main(int	argc, char	**argv)
{
	char	buf;

	if (argc > 1)
		cat(argc, argv);
	else if (argc == 1)
	{
		while (read(0, &buf, 1) != 0)
			write(1, &buf, 1);
	}
}
