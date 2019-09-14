/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:33:41 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/14 19:22:15 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		ps_which_rotate(t_node *cur, t_node *max)
{
	int len;
	int find;

	len = 0;
	find = 0;
	while (cur != NULL)
	{
		if (cur == max)
			find = len;
		len++;
		cur = cur->next;
	}
	if (len / 2 < find)
		return (0);
	return (1);
}

t_node	*ps_min_value(t_node *cur)
{
	t_node *min;

	min = cur;
	while (cur != NULL)
	{
		if (cur->value < min->value)
			min = cur;
	cur = cur->next;
	}
	return (min);
}

void	ps_main_algo(t_list *a, t_list *b, t_node *cur)
{
	t_node *min;

	if (ps_check_list_first(a, b, a->head, a->head->next) == 1)
		return ;
	while (cur != NULL)
	{
		min = ps_min_value(a->head);
		while (min != a->head)
		{
			if (ps_which_rotate(a->head, min) == 1)
				ps_rotate_a(a, b);
			else
				ps_reverse_rotate_a(a, b);
		}
		if (ps_check_final(a, b) == 1)
			return ;
		ps_push_b(a, b);
		cur = a->head;
	}
	cur= b->head;
	while (cur != NULL)
	{
		cur = cur->next;
		ps_push_a(a, b);
	}
}
