/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvongdar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 15:59:45 by pvongdar          #+#    #+#             */
/*   Updated: 2019/07/24 22:37:30 by pvongdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem2;

	elem2 = (t_list*)malloc(sizeof(t_list));
	elem2->data = data;
	elem2->next = NULL;
	return (elem2);
}
