/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:54:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/29 22:39:02 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		*master_a_to_b(t_ps *ps, int size)
{
	int recur_size_a;

	recur_size_a = 0;
	printf("Kikoo\n");
/*
 * ICI C'EST CASSE
**	if (check_rising(ps->a, ps->len_a) == 1)
** return (ps->a);
*/
	ps->mediane = compute_mediane(ps);
	printf("ps->len_a master a= %d\n", ps->len_a);
	ps->pivot = pivot_pickup(ps);
	int k = 0;
	while (k < ps->len_a)
	{
		printf("ps->a[%d] = %d\n", k, ps->a[k]);
		k++;
	}
	recur_size_a = push_a_to_b(ps, size);
	printf ("recur_size_a 1 = %d\n", recur_size_a);
	if (size > 0)
	{
		master_a_to_b(ps, size - recur_size_a);
	}
	if (size == 0)
	{
		printf ("recur_size_a 2 = %d\n", recur_size_a);
		master_b_to_a(ps, recur_size_a);
	}
	return (0);
}


int		*master_b_to_a(t_ps *ps, int size)
{
	int recur_size_b;

	recur_size_b = 0;
	printf("");
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

