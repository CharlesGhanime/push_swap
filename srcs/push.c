/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:42:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/02 18:34:44 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_a(t_ps *ps)
{
	if (a[0] == 0 || len_a == 0)
		return (-1);
	a[len_a] = b[len_b - 1];
	len_a -= 1;
	len_b += 1;
	write(1, "pa\n", 3);
}

int		push_b(t_ps *ps)
{
	if (b[0] == 0 || len_b == 0)
		return (-1);
	b[0] = a[len_a - 1];
	len_b -= 1;
	len_a += 1;
	write(1, "pb\n", 3);
}
