/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:30:51 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/24 00:07:28 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_test(int n)
{
  n = n * 10;
  return(n);

}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *outcome;

	i = 0;
	outcome =malloc(sizeof(int) * length);
	while (i < length)
	{
		outcome[i] = f(tab[i]);
		i++;
	}
	return (outcome);
}

int main()
{
  int i;
  int tab[5] = {1, 2, 3, 4, 5};
  int *pint = ft_map(tab, 5, &ft_test);

 i = 0;
 while(i < 5)
   {
     printf("%d\n",pint[i]); 
     i++;
   }

return 0;
	
}
