/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 08:22:36 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/08 14:12:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void ps_push_a(t_list *stack_a, t_list *stack_b)
{
	t_list *tmp;

	tmp = stack_b;
	tmp->value = stack_b->value;
	free(stack_b);
	if (tmp == NULL)
		return ;
	else
		tmp->next = stack_a;
}

void ps_push_b(t_list *stack_a, t_list *stack_b)
{
	t_list *tmp;

	tmp = stack_a;
	tmp->value = stack_a->value;
	free(stack_a);
	if (tmp == NULL)
		return ;
	else
		tmp->next = stack_b;
}

void	ps_push_ss(t_list *stack_a, t_list *stack_b)
{
	ps_push_a(stack_a, stack_b);
	ps_push_b(stack_a, stack_b);
}
