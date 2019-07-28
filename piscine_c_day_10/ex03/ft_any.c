/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 23:41:30 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/23 23:41:35 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

intft_any(char **tab, int (*f)(char*))
{
  while (*tab)
    {
      if (f(*tab))
	return (1);
      tab++;
    }
  return (0);
}
