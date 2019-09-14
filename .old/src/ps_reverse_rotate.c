/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 17:20:20 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/14 18:00:44 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_reverse_rotate_a(t_list *lst_a, t_list *lst_b)
{
	t_node	*element;

	if (lst_a->head && lst_a->head != lst_a->tail)
	{
		element = lst_a->head;
		while (element->next != lst_a->tail)
			element = element->next;
		element->next->next = lst_a->head;
		lst_a->head = element->next;
		element->next = NULL;
		lst_a->tail = element;
		write(1, "rra\n", 4);
	}
}

void	ps_reverse_rotate_b(t_list *lst_b, t_list *lst_a)
{
	t_node	*element;

	if (lst_b->head && lst_b->head != lst_b->tail)
	{
		element = lst_b->head;
		while (element->next != lst_b->tail)
			element = element->next;
		element->next->next = lst_b->head;
		lst_b->head = element->next;
		element->next = NULL;
		lst_b->tail = element;
		write(1, "rrb\n", 4);
	}
}

void	ps_reverse_rotate_rrr(t_list *lst_a, t_list *lst_b)
{
	t_node	*element;

	if ((lst_a->head && lst_a->head != lst_a->tail)
	|| (lst_b->head && lst_b->head != lst_b->tail))
	{
		element = lst_a->head;
		while (element->next != lst_a->tail)
			element = element->next;
		element->next->next = lst_a->head;
		lst_a->head = element->next;
		element->next = NULL;
		lst_a->tail = element;
		element = lst_b->head;
		while (element->next != lst_b->tail)
			element = element->next;
		element->next->next = lst_b->head;
		lst_b->head = element->next;
		element->next = NULL;
		lst_b->tail = element;
		write(1, "rrr\n", 4);
	}
}
