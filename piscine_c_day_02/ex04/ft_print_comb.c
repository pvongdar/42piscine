/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:40:43 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/11 20:28:06 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int xyz[3];

	xyz[0] = 0;
	while (xyz[0] < 10)
	{
		xyz[1] = xyz[0] + 1;
		while (xyz[1] < 10)
		{
			xyz[2] = xyz[1] + 1;
			while (xyz[2] < 10)
			{
				ft_putchar('0' + xyz[0]);
				ft_putchar('0' + xyz[1]);
				ft_putchar('0' + xyz[2]);
				if (!(xyz[0] > xyz[1] && xyz[1] > xyz[2]))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				xyz[2]++;
			}
			xyz[1]++;
		}
		xyz[0]++;
	}
}
