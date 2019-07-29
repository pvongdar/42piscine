/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llahmy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:06:27 by llahmy            #+#    #+#             */
/*   Updated: 2019/07/28 20:57:12 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 5000

typedef struct	s_dim
{
	int			rows;
	int			colums;
	char		*rush;
}				t_dim;

void			display_err_message(void);
t_dim			get_dimensions(char *str);
int				check_dimensions(char *str);
void			ft_putstr(char *str);

int				main(int argc, char **argv)
{
	t_dim 		rush;
/*
	int i = 1;
	
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
	if ((argc - 1 != 1))
	{
		display_err_message();
		return (0);
	}
	*/
	int ret;
	char buf[BUF_SIZE + 1];

	while ((ret = read(0, buf, BUF_SIZE)))
	  {
	
	    buf[ret] = '\0';
	  }
		
	if (!check_dimensions(argv[1]))
	{
		display_err_message();
		return (0);
	}
	rush = get_dimensions(argv[1]);
	//find_match();
}

void			display_err_message(void)
{
	write(1, "Invalid input\n", 14);
}

t_dim			get_dimensions(char *str)
{
	t_dim		dim;
	int 		i;
	int 		count_rows;
	int 		count_columns;

	count_rows = 0;
	i = 0;
	while (str[i] && (str[i] != '\n'))
	{
		i++;
	}
	count_columns = i;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count_rows++;
		i++;
	}
	dim.rows = count_rows;
	dim.colums = count_columns;
	return (dim);
}

int				check_dimensions(char *str)
{
	return (1);
}

void			ft_putstr(char *str)
{
	int i;
	char c;
	i = 0;
	while (str[i])
	{
		c = str[i];
		write(1, &c, 1);
		i++;	
	}
}

int			ft_strcat(char *str1, char *str2)
{
	int i;
	int j;
	char *str;

	i = 0;
	j = 0;
	while (str1[i])
		i++;
	i--;
	while (str2[i])
		i++;
	str = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (str1)
	{
		str[i] = str1[i];
		i++;
	}	
	while (str2)
	{
		str[i] = str1[j];
		i++;
		j++;
	}	
	return (*str);
}
