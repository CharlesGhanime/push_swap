/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:18:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/25 16:33:20 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		algo(t_ps *ps)
{
	int i;

	i = 0;
	// check tabs rising or falling
	if (check_rising(ps) == 1)
		return (0);
	if (check_falling == 1)
	{
		while (i < len_a)
		{
			push_a(ps);
			i++;
		}
	}
	while (i < len_a)
	{
		if (ps->a[i] < pivot)
			rotate_a(ps);
		else
			push_a(ps);
	}
	return (0);
}