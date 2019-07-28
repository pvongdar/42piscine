/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 20:49:09 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/16 23:37:08 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
  int i = 0;

  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return(dest);
}

int main()
{

  char s1[] = "hello";
  char s2[] = "exam";

  ft_strcpy(s1, s2);
  printf("%s", s1);

  return 0;
}
