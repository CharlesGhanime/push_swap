/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:29:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 09:21:44 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	swap(t_list *lst)
{
	int tmp;

	if (!lst->head || !lst->head->next)
		return ;
	tmp = lst->head->value;
	lst->head->value = lst->head->next->value;
	lst->head->next->value = tmp;
}
/*
void	swap_b(t_list *lst_b)
{
	int tmp;

	if (!lst_b->head || !lst_b->head->next)
		return ;
	tmp = lst_b->head->value;
	lst_b->head->value = lst_b->head->next->value;
	lst_b->head->next->value = tmp;
}
*/
void	ps_swap_ss(t_list *lst_a, t_list *lst_b)
{
	swap(lst_a);
	swap(lst_b);
}
