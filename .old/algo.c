/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:18:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 14:36:36 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		algo(t_ps *ps)
{
	int i;

	i = 0;
	// check tabs rising or falling
	if (check_rising(ps->a, ps->len_a) == 1)
		return (0);
	if (check_falling(ps->a, ps->len_a) == 1)
	{
		while (i < ps->len_a)
		{
			rotate_a(ps);
			i++;
		}
	}
	if (ps->a[0] < ps->a[ps->len_a])
	{
		rotate_a(ps);
	}
	while (i < ps->len_a)
	{
		if (ps->a[i] <= ps->pivot)
			push_a(ps);
		else
			rotate_a(ps);
	}
	return (0);
}
