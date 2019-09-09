/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 14:13:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/09 05:14:01 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ps_rotate_a(t_list *stack_a, t_list **head_a)
{
	t_list *tmp;

	stack_a = *head_a;
	tmp = stack_a;
	if (tmp == NULL)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = stack_a;
	stack_a->next = NULL;
	*head_a = tmp->next;
	write (1, "ra\n", 3);
}

void	ps_rotate_b(t_list *stack_b, t_list **head_b)
{
	t_list *tmp;

	stack_b = *head_b;
	tmp = stack_b;
	if (tmp == NULL)
		return ;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = stack_b;
	stack_b->next = NULL;
	*head_b = tmp->next;
	write (1, "rb\n", 3);
}

void	ps_rr(t_list *stack_a, t_list *stack_b, t_list **head_a,
		t_list **head_b)
{
	ps_rotate_a(stack_a, head_a);
	ps_rotate_b(stack_b, head_b);
	write (1, "rr\n", 3);
}
