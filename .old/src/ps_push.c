/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:50:39 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/14 17:51:07 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_push_a(t_list *lst_a, t_list *lst_b)
{
	t_node *element;

	if (lst_b->head)
	{
		element = lst_b->head;
		if (lst_a->head == NULL)
		{
			lst_b->head = element->next;
			element->next = NULL;
			lst_a->head = element;
			lst_a->tail = element;
		}
		else
		{
			lst_b->head = element->next;
			element->next = lst_a->head;
			lst_a->head = element;
		}
		write(1, "pa\n", 3);
	}
}

void	ps_push_b(t_list *lst_a, t_list *lst_b)
{
	t_node *element;

	if (lst_a->head)
	{
		element = lst_b->head;
		if (lst_a->head == NULL)
		{
			lst_a->head = element->next;
			element->next = NULL;
			lst_b->head = element;
			lst_b->tail = element;
		}
		else
		{
			lst_a->head = element->next;
			element->next = lst_b->head;
			lst_b->head = element;
		}
		write(1, "pb\n", 3);
	}
}
