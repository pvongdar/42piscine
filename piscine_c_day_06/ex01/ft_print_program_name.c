/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:55:51 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/17 22:36:09 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	argc = 0;
	while (argv[0][argc] != '\0')
	{
		ft_putchar(argv[0][argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
