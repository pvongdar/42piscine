/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:41:42 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/16 20:27:27 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int outcome;

	i = 0;
	sign = 0;
	outcome = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		outcome = outcome * 10;
		outcome = outcome + str[i] - '0';
		i++;
	}
	return ((sign == -1) ? outcome * sign : outcome);
}
