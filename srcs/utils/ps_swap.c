/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:29:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/09 04:40:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_list *stack_a)
{
	int tmp;

	if (!stack_a || !stack_a->next)
		return ;
	tmp = stack_a->value;
	stack_a->value = stack_a->next->value;
	stack_a->next->value = tmp;
	write (1, "sa\n", 3);
}

void	swap_b(t_list *stack_b)
{
	int tmp;

	if (!stack_b || !stack_b->next)
		return ;
	tmp = stack_b->value;
	stack_b->value = stack_b->next->value;
	stack_b->next->value = tmp;
	write (1, "sb\n", 3);
}

void	ps_swap_ss(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write (1, "ss\n", 3);
}
