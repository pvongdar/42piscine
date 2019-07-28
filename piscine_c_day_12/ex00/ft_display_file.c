/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 16:00:06 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/25 22:36:17 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUF_SIZE 50

void	ft_display_file(char *filename)
{
	char	ret[BUF_SIZE + 1];
	int		out;
	int		file;

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		write(1, "open() error", 18);
		return ;
	}

       
	while((out = read(file, ret, BUF_SIZE)))
	{
	ret[out] = '\0';
	write(1, ret, out);
	}

	if (close(file) == -1)
	{
		write(2, "close() error\n", 18);
		return ;
	}
}

int		main(int argc, char **argv)
{
	if (argc == -1)
	{
		write(2, "open error\n", 10);
	}
	else if (argc < 2)
	{
		write(2, "File name missing.\n", 18);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 19);
	}
	else
	{
		ft_display_file(argv[1]);
	}
	return (0);
}
