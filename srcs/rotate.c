/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:32:27 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/21 18:10:35 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rotate_a(t_ps *ps)
{
	int *tmp;
	int i;

	tmp[0] = a[0];
	i = len_a;
	while (i-- > 0)
	{
		if (i == 0)
			a[len_a] = tmp[0];
		else
			a[i - 1] = a[i];
	}
	write (1, "ra\n", 3);
	return (0);
}


int		rotate_b(t_ps *ps)
{
	int *tmp;
	int i;

	tmp[0] = b[0];
	i = len_b;
	while (i-- > 0)
	{
		if (i == 0)
			b[len_b] = tmp[0];
		else
			b[i - 1] = b[i];
	}
	write (1, "rb\n", 3);
	return (0);
}

int		rotate_r(t_ps *ps)
{
	int *tmp;
	int i;

	tmp[0] = a[0];
	i = len_a;
	while (i-- > 0)
	{
		if (i == 0)
			a[len_a] = tmp[0];
		else
			a[i - 1] = a[i];
	}
	tmp[0] = b[0];
	i = len_b;
	while (i-- > 0)
	{
		if (i == 0)
			b[len_b] = tmp[0];
		else
			b[i - 1] = b[i];
	}
	write(1, "rr\n", 3);
	return (0);
}
