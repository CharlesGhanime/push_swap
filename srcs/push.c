/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:42:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 14:43:08 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		push_a(t_ps *ps)
{
	if (ps->a[0] == 0 || ps->len_a == 0)
		return (-1);
	ps->a[ps->len_a] = ps->b[ps->len_b - 1];
	ps->len_a -= 1;
	ps->len_b += 1;
	write(1, "pa\n", 3);
	return (0);
}

int		push_b(t_ps *ps)
{
	if (ps->b[0] == 0 || ps->len_b == 0)
		return (-1);
	ps->b[0] = ps->a[ps->len_a - 1];
	ps->len_b -= 1;
	ps->len_a += 1;
	write(1, "pb\n", 3);
	return (0);
}
