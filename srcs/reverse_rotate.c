/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:07:45 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/04 16:35:52 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		reverse_rotate_a(t_ps *ps)
{
	int *tmp;
	int i;

	tmp[0] = a[len_a];
	i = 0;
	while (i++ < len_a)
	{
		if (i == len_a)
			a[0] = tmp[0];
		else
			a[i + 1] = a[i];
	}
	write (1, "rra\n", 4);
	return (0);
}

int		reverse_rotate_b(t_ps *ps)
{
	int *tmp;
	int i;

	tmp[0] = b[len_b];
	i = 0;
	while (i++ < len_b)
	{
		if (i == len_b)
			b[0] = tmp[0];
		else
			b[i + 1] = b[i];
	}
	write (1, "rrb\n", 4);
	return (0);
}

int		reverse_roate_r(t_ps *ps)
{
	int *tmp;
	int i;

	tmp[0] = a[len_a];
	i = 0;
	while (i++ < len_a)
	{
		if (i == len_a)
			a[0] = tmp[0];
		else
			a[i + 1] = a[i];
	}
	tmp[0] = b[len_b];
	i = 0;
	while (i++ < len_b)
	{
		if (i == len_b)
			b[0] = tmp[0];
		else
			b[i + 1] = b[i];
	}
	write(1, "rrr\n", 4);
	return (0)
}
