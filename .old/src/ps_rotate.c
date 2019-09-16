/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:00:59 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/16 16:21:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_rotate_a(t_list *lst_a, t_list *lst_b)
{
	t_node *element;

	(void)lst_b;
	if ((lst_a->head || lst_a->head->next) && lst_a->head != lst_a->tail)
	{
		element = lst_a->head;
		lst_a->head = lst_a->head->next;
		element->next = NULL;
		lst_a->tail->next = element;
		lst_a->tail = element;
		write(1, "ra\n", 3);
	}
}

void	ps_rotate_b(t_list *lst_a, t_list *lst_b)
{
	t_node *element;

	(void)lst_a;
	if ((lst_b->head || lst_b->head->next) && lst_b->head != lst_b->tail)
	{
		element = lst_b->head;
		lst_b->head = lst_b->head->next;
		element->next = NULL;
		lst_b->tail->next = element;
		lst_b->tail = element;
		write(1, "rb\n", 3);
	}
}

void	ps_rotate_rr(t_list *lst_a, t_list *lst_b)
{
	t_node *element;

	if (lst_a->head || (lst_a->head->next && lst_a->head != lst_a->tail)
	|| lst_b->head || (lst_b->head->next && lst_b->head != lst_b->tail))
	{
		element = lst_a->head;
		lst_a->head = lst_a->head->next;
		element->next = NULL;
		lst_a->tail->next = element;
		lst_a->tail = element;
		element = lst_b->head;
		lst_b->head = lst_b->head->next;
		element->next = NULL;
		lst_b->tail->next = element;
		lst_b->tail = element;
		write(1, "rr\n", 3);
	}
}
