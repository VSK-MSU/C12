/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 14:14:00 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 16:02:34 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*last_list;

	if (*begin_list)
	{
		last_list = *begin_list;
		list = ft_crate_elem(data);
		while (last_list->next)
			lst_list = last_list->next;
		last_list->next = list;
	}
	else
		*begin_list = ft_create_elem(data);
}
