/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:07:54 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 22:45:53 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*nxt;

	if (begin_list)
	{
		curr = begin_list;
		free_fct(curr);
		nxt = curr->next;
		curr->next = NULL;
		free(curr);
		while (nxt)
		{
			curr = nxt;
			nxt = curr->next;
			free_fct(curr->data);
			curr->next = NULL;
			free(curr);
		}
	}
}
