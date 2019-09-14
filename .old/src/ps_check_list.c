/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:38:59 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/14 19:22:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ps_check_list_rising(t_node *back, t_node *front)
{
	while (front)
	{
		if (back->value > front->value)
			return (0);
		back = back->next;
		front = front->next;
	}
	return (1);
}

int		ps_check_list_falling(t_node *back, t_node *front)
{
	while (front)
	{
		if (back->value < front->value)
			return (0);
		back = back->next;
		front = front->next;
	}
	return (1);
}

int		ps_check_tail(t_list *lst_a, t_list *lst_b)
{
	ps_reverse_rotate_a(lst_a, lst_b);
	if (ps_check_list_rising(lst_a->head, lst_a->head->next) == 1)
		return (1);
	ps_reverse_rotate_a(lst_a, lst_b);
	ps_swap_a(lst_a, lst_b);
	ps_rotate_a(lst_a, lst_b);
	ps_rotate_a(lst_a, lst_b);
	if (ps_check_list_rising(lst_a->head, lst_a->head->next) == 1)
		return (1);
	return (0);
}

int		ps_check_list_first(t_list *lst_a, t_list *lst_b,
		t_node *back, t_node *front)
{
	if (lst_a->argc > 3 && lst_a->head->value < lst_a->head->next->value
	&& lst_a->head->value < lst_a->tail->value
	&& lst_a->head->next->value > lst_a->tail->value)
	{
		if (ps_check_list_rising(lst_a->head, lst_a->head->next) == 0)
			return (0);
	}
	while (front)
	{
		if (front == lst_a->head->next && back->value > front->value)
		{
			ps_swap_a(lst_a, lst_b);
			if (ps_check_list_rising(lst_a->head, lst_a->head->next) == 1)
				return (1);
		}
		if (front == lst_a->tail && back->value > front->value
		&& lst_a->argc > 3 && ps_check_tail(lst_a, lst_b) == 1)
			return (1);
		if (back->value > front->value)
			return (0);
		back = back->next;
		front = front->next;
	}
	return (ps_check_list_rising(lst_a->head, lst_a->tail) == 0 ? 1 : 0);
}

int		ps_check_final(t_list *lst_a, t_list *lst_b)
{
	if (ps_check_list_rising(lst_a->head, lst_a->head->next) == 1)
	{
		if (lst_b->head && lst_b->head->next
		&& ps_check_list_falling(lst_b->head, lst_b->head->next) == 1)
		{
			while (lst_b->head)
				ps_push_a(lst_a, lst_b);
			if (lst_b->head == NULL)
				return (1);
		}
		else
		{
			ps_push_a(lst_a, lst_b);
			return (1);
		}
	}
	return (0);
}
