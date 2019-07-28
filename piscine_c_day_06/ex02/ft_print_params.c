/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 23:05:43 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/17 23:05:46 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int textbox;

	i = 1;
	j = 0;
	while (argv[i] != '\0' && i < argc)
	{
		while (argv[i][textbox] != '\0')
		{
			ft_putchar(argv[i][textbox]);
			textbox++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
