/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:13:16 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/13 22:13:20 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	return (nb) * ft_recursive_factorial(nb - 1);
}

int main()
{
  
  printf("%d", ft_recursive_factorial()); 
  return 0;
}
