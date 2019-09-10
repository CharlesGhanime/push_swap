/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:31:52 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/09 15:25:30 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	ps_reverse_rotate_a(t_list *stack_a, t_list **head_a)
{
	t_list *tmp;

	stack_a = *head_a;
	tmp = stack_a;
	if (tmp == NULL)
		return ;
	while (tmp->next->next)
		tmp = tmp->next;
	printf("%d\n", tmp->value);
	tmp->next->next = stack_a;
	tmp->next = NULL;
	*head_a = tmp;
	write(1, "rra\n", 4);
}

void	ps_reverse_rotate_b(t_list *stack_b, t_list **head_b)
{
	t_list *tmp;

	stack_b = *head_b;
	tmp = stack_b;
	if (tmp == NULL)
		return ;
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next->next = stack_b;
	tmp->next = NULL;
	*head_b = tmp;
	write(1, "rrb\n", 4);
}

void	ps_rrr(t_list *stack_a, t_list *stack_b, t_list **head_a,
		t_list **head_b)
{
	ps_reverse_rotate_a(stack_a, head_a);
	ps_reverse_rotate_b(stack_b, head_b);
	write(1, "rrr\n", 4);
}
