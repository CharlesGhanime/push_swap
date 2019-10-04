/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:54:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/04 19:05:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*master_a(t_ps *ps, int size)
{
	if (check_rising(ps->a) == 1)
		return (ps->a);
	ps->recur_size = push_a_to_b(ps, ps->push_len);
	push_b_to_a(ps, ps->recur_size * 2);
	master_b(ps, ps->recur_size * 2)
}

int		*master_b(t_ps *ps, int size)
{
	ps->recur_size = push_b_to_a(ps, ps->push_len * 2);
	if (check_rising(ps->a) == 1)
		return (ps->a);
	master_a(ps, ps->recur_size * 2);
}
