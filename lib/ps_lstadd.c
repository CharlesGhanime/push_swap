/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:48:19 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/11 18:03:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*ps_lstadd(t_list *lst, int value)
{
	t_node *new;

	if (lst != NULL)
	{
		if ((new = (t_node *)malloc(sizeof(t_node))) != NULL)
		{
			new->value = value;
			new->next = NULL;
			if (lst->tail == NULL)
			{
				lst->head = new;
				lst->tail = new;
			}
			else
			{
				lst->tail->next = new;
				lst->tail = new;
			}
		}
		lst->argc++;
	}
	return(lst);
}
