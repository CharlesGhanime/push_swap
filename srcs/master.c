/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:54:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/01 21:59:09 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		*master_a_to_b(t_ps *ps, int size)
{
	int recur_size_a;

	recur_size_a = 0;
/*
 * ICI C'EST CASSE
**	if (check_rising(ps->a, ps->len_a) == 1)
** return (ps->a);
*/
	ptfa;
	ps->mediane = compute_mediane(ps);
	ptfa;
	ps->pivot = pivot_pickup(ps);
	ptfa;
	recur_size_a = push_a_to_b(ps, size);
	if (size > 0)
	{
		master_a_to_b(ps, size - recur_size_a);
	}
	if (size == 0)
	{
		master_b_to_a(ps, recur_size_a);
	}
	return (0);
}

int		*master_b_to_a(t_ps *ps, int size)
{
	int recur_size_b;

	recur_size_b = 0;
	recur_size_b = push_b_to_a(ps, size);
	if (size > 0)
	{
		ps->mediane = compute_mediane(ps);
		ps->pivot = pivot_pickup(ps);
		master_a_to_b(ps, recur_size_b);
	}
	if (size == 0)
		master_b_to_a(ps, size - recur_size_b);
	return (0);
}

