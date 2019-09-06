/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:29:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 05:37:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap_a(t_list *lst_a)
{
	int tmp;

	if (!lst_a->head || !lst_a->head->next)
		return ;
	tmp = lst_a->head->value;
	lst_a->head->value = lst_a->head->next->value;
	lst_a->head->next->value = tmp;
}

void	swap_b(t_list *lst_b)
{
	int tmp;

	if (!lst_b->head || !lst_b->head->next)
		return ;
	tmp = lst_b->head->value;
	lst_b->head->value = lst_b->head->next->value;
	lst_b->head->next->value = tmp;
}

void	swap_ss(t_list *lst_a, t_list *lst_b)
{
	int tmp_a;
	int tmp_b;

	if (!lst_a->head || !lst_a->head->next
		|| !lst_b->head || !lst_b->head->next)
		return ;
	tmp_a = lst_a->head->value;
	lst_a->head->value = lst_a->head->next->value;
	lst_a->head->next->value = tmp_a;
	tmp_b = lst_b->head->value;
	lst_b->head->value = lst_b->head->next->value;
	lst_b->head->next->value = tmp_b;
}
