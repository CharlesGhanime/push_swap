/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:32:27 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 16:15:00 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int64_t		rotate_a(t_ps *ps)
{
	int64_t		*tmp;
	size_t		i;

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

int64_t		rotate_b(t_ps *ps)
{
	int64_t		*tmp;
	size_t		i;

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

int64_t		rotate_r(t_ps *ps)
{
	int64_t		*tmp;
	size_t		i;

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
