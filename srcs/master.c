/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:54:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 17:15:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int64_t		*master_a_to_b(t_ps *ps, size_t size)
{
	size_t recur_size_a;

	recur_size_a = 0;
/*
 * ICI C'EST CASSE
**	if (check_rising(ps->a, ps->len_a) == 1)
** return (ps->a);
*/
//	PSA;
	PTF("coucou avant mediane");
	ps->mediane = compute_mediane(ps);
	PTF("ptf apres mediane");
//	PSA;
	ps->pivot = pivot_pickup(ps);
//	PSA;
	recur_size_a = push_a_to_b(ps, size);
/* A VOIR PLUS TARD */
/*
	if (size > 0)
		master_a_to_b(ps, size - recur_size_a);
	else
		master_b_to_a(ps, recur_size_a);
	return (0);
*/
	return (0);
}

int64_t		*master_b_to_a(t_ps *ps, size_t size)
{
	size_t recur_size_b;

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

