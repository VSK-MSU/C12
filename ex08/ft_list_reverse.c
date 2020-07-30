/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 21:13:29 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 22:24:36 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*nxt;
	t_list	*buffer;

	nxt = NULL;
	list = *begin_list;
	if(!list || !list->next)
		return;
	nxt = list->next;
	buffer = nxt->next;
	list->next = NULL;
	while (buffer)
	{
		list = nxt;
		nxt = buffer;
		buffer = buffer->next;
		nxt->next = list;
	}
	*begin_list = tmp
}
