/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:43:19 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/14 13:50:16 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_swap_a(t_list *lst_a, t_list *lst_b)
{
	int tmp;

	if(lst_a->head == NULL || lst_a->head->next == NULL)
		return ;
	tmp = lst_a->head->value;
	lst_a->head->value = lst_a->head->next->value;
	lst_a->head->next->value = tmp;
	write (1, "sa\n", 3);
}

void	ps_swap_b(t_list *lst_b, t_list *lst_a)
{
	int tmp;

	if(lst_b->head == NULL || lst_b->head->next == NULL)
		return ;
	tmp = lst_b->head->value;
	lst_b->head->value = lst_b->head->next->value;
	lst_b->head->next->value = tmp;
	write (1, "sb\n", 3);
}

void	ps_swap_ss(t_list *lst_a, t_list *lst_b)
{
	int tmp_a;
	int tmp_b;

	if(lst_a->head == NULL || lst_a->head->next == NULL
	|| lst_b->head == NULL || lst_b->head->next == NULL)
		return ;
	tmp_a = lst_a->head->value;
	lst_a->head->value = lst_a->head->next->value;
	lst_a->head->next->value = tmp_a;
	tmp_b = lst_b->head->value;
	lst_b->head->value = lst_b->head->next->value;
	lst_b->head->next->value = tmp_b;
	write (1, "ss\n", 3);
}
