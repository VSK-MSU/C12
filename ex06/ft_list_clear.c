/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezaynabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 18:07:54 by ezaynabi          #+#    #+#             */
/*   Updated: 2020/07/30 19:28:39 by ezaynabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (nxt)
		{
			curr = nxt;
			nxt = curr->next;
			free_fct(curr);
			curr->next = NULL;
		}
	}
}
