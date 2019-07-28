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
#include <errno.h>
#define BUF_SIZE 500

void pv_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}

void	ft_cat(char *filename)
{
	char	ret[BUF_SIZE + 1];
	int		out;
	int		file;

	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		if (errno == 21)
		{
		  pv_putstr("cat: ");
		  pv_putstr(filename);
		  pv_putstr(": Is a directory\n");
		}
		else
		  {
		  pv_putstr("cat: ");
		  pv_putstr(filename);
		  pv_putstr(": No such file or directory\n");
		  }
	}
	out = read(file, ret, BUF_SIZE);
	ret[out] = '\0';
	write(1, ret, out);
	if (close(file) == -1)
	{
		write(2, "close() error\n", 18);
		return ;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
	{
	  while(read(STDIN_FILENO, &c, 1) > 0)
		write(1, c, 1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 19);
	}
	else
	{
	  while (i < argc)
	    {
		ft_cat(argv[i]);
		i++;
	    }
	}
	return (0);
}
