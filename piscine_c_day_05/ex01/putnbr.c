/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:27:27 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/15 15:27:30 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
  write(1, &c, 1);
}

void	ft_putnbr(int nb)
{

  while(nb < 0)
    {
      ft_putchar("-");
      ft_putchar(-nb);
    }
  else if(nb > 0)
    {
      putnbr(nb / 10);
      putnbr(nb % 10);
    }
  ft_putchar(nb);
}


int main()
{
 ft_ putnbr(42);
 return 0;
}
