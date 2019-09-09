/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:31:52 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/08 14:17:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ps_reverse_rotate(t_list *stack, t_list **head)
{
	t_list *tmp;

	stack = *head;
	tmp = stack;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = stack;
	tmp->next = NULL;
	*head = tmp;
}

void	ps_rrr(t_list *stack_a, t_list *stack_b, t_list **head_a,
		t_list **head_b)
{
	ps_reverse_rotate(stack_a, head_a);
	ps_reverse_rotate(stack_b, head_b);
}
