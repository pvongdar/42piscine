/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:17:50 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/15 11:17:52 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;
  i = 0;

  while(str[i] != '\0')
    {
      ft_putchar(str[i]);
      i++;
    }
}


int main()
{
  ft_putstr("WHADDDDUPP");
  return 0;
}
