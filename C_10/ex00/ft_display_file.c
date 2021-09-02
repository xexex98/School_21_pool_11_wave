/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:44:08 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/01 13:56:56 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void	print(char	*str)
{
	int		fd;
	char	buf[];

	fd = open(str, O_RDONLY, 0);
	if (fd < 0)
		write(2, "Cannot read file.\n", 19);
	else
		while (read(fd, buf, 1))
			write(1, buf, 1);

	close (fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(2, "File name missing.\n", 20);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	else
		print(argv[1]);
	return (0);
}
