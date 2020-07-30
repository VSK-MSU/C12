/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 16:03:50 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 18:11:40 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*list;
	t_list	*current_list;

	if(size > 0)
	{
		size--;
		list = ft_create_elem(strs[size]);
		current_list = list;
		while (size > 0)
		{
			size--;
			current_list->next = ft_create_elem(strs[size--]);
			current_list = current_list->next;
		}
		return (list);
	}
	else
	{
		list = ft_create_elem(void);
		return (list);
	}
}
