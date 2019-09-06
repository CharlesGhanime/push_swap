/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:36:21 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 04:59:11 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*ps_lstadd(t_list *lst, int value)
{
	t_node	*new;

	if (lst)
	{
		if ((new = (t_node *)malloc(sizeof(t_node))))
		{
			new->value = value;
			new->next = NULL;
			if (!lst->tail)
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
	return (lst);
}
