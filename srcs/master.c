/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   master.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:54:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/25 19:42:58 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		*master_a_to_b(t_ps *ps, int size)
{
	if (check_rising(ps->a, ps->len_a) == 1)
		return (ps->a);
	ps->recur_size = push_a_to_b(ps, size);
	if (size > 0)
		master_a_to_b(ps, size - ps->recur_size);
	if (size == 0)
		master_b_to_a(ps, ps->recur_size);
	return (0);
}

int		*master_b_to_a(t_ps *ps, int size)
{
	ps->recur_size = push_b_to_a(ps, size);
	if (size > 0)
		master_a_to_b(ps, ps->recur_size);
	if (size == 0)
		master_b_to_a(ps, size - ps->recur_size);
	return (0);
}
