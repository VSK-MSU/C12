/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 13:42:12 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 22:21:05 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*newlist;

	newlist = NULL;
	newlist = malloc(sizeof(t_list));
	if (newlist)
	{
		newlist->data = data;
		newlist->next = NULL;
	}
	return (newlist);
}
