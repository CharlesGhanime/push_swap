/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:29:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/08 14:11:28 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_list *stack)
{
	int tmp;

	if (!stack || !stack->next)
		return ;
	tmp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = tmp;
}

/*void	swap_b(t_list *stack_b)
{
	int tmp;

	if (!stack_b->head || !stack_b->head->next)
		return ;
	tmp = stack_b->head->value;
	stack_b->head->value = stack_b->head->next->value;
	stack_b->head->next->value = tmp;
}*/

void	ps_swap_ss(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
