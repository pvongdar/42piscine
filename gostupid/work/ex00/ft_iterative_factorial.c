/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 18:30:06 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/13 22:09:01 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb > 12 || nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
