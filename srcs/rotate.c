/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:32:27 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 16:22:41 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		rotate_a(t_ps *ps)
{
	int *tmp;
	int i;

	tmp = ps->a;
	i = ps->len_a;
	while (i-- > 0)
	{
		if (i == 0)
			ps->a[ps->len_a] = tmp[0];
		else
			ps->a[i - 1] = tmp[i];
	}
	write (1, "ra\n", 3);
	return (0);
}

int		rotate_b(t_ps *ps)
{
	int *tmp;
	int i;

	tmp = ps->b;
	i = ps->len_b;
	while (i-- > 0)
	{
		if (i == 0)
			ps->b[ps->len_b] = tmp[0];
		else
			ps->b[i - 1] = tmp[i];
	}
	write (1, "rb\n", 3);
	return (0);
}

int		rotate_r(t_ps *ps)
{
	int *tmp;
	int i;

	tmp = ps->a;
	i = ps->len_a;
	while (i-- > 0)
	{
		if (i == 0)
			ps->a[ps->len_a] = tmp[0];
		else
			ps->a[i - 1] = tmp[i];
	}
	tmp = ps->b;
	i = ps->len_b;
	while (i-- > 0)
	{
		if (i == 0)
			ps->b[ps->len_b] = tmp[0];
		else
			ps->b[i - 1] = tmp[i];
	}
	write(1, "rr\n", 3);
	return (0);
}
