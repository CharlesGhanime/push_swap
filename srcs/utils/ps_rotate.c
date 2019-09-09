/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:13:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/08 14:20:17 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ps_rotate(t_list *stack, t_list **head)
{
	t_list *tmp;

	stack = *head;
	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = stack;
	stack->next = NULL;
	*head = tmp->next;
}

void	ps_rr(t_list *stack_a, t_list *stack_b, t_list **head_a,
		t_list **head_b)
{
	ps_rotate(stack_a, head_a);
	ps_rotate(stack_b, head_b);
}
