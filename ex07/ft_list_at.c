/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 19:30:09 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 22:22:37 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	t_size	*list;
	int		counter;

	if (begin_list)
	{
		list = begin_list;	
		counter = 1;
		while (list->next)
		{
			list = list->next;
			counter++;
		}
	}
	else
		return (0);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*curr;

	int		counter;
	if (begin_list && ft_list_size(begin_list) - 1 => nbr)
	{
		counter = 0;
		curr = begin_list;
		while (counter < nbr)
		{
			curr = curr->next;
		}
		return (curr);
	}
	else (NULL);
}
