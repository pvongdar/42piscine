/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:56:05 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/17 10:28:46 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define COL_EDGE(col, x) (col == 0 || col == x - 1)
#define ROW_EDGE(row, y) (row == 0 || row == y - 1)
#define ROW_EDGE1(row, y) (row == 0)
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush02(int x, int y)
{
	int row;
	int col;

	row  = 0;
	while(row != y)
	{
		col = 0;
		while(col != x)
		{	
		  if (ROW_EDGE1(row, y) && COL_EDGE(col, x))
				ft_putchar('A');
			else if (ROW_EDGE(row, y) && COL_EDGE(col, x))
				ft_putchar('C');
			else if (COL_EDGE(col, x) || ROW_EDGE(row, y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}           
		row++;
		ft_putchar('\n');
	} 
}

int main()
{
	rush02(5,3);
	return 0;
}
