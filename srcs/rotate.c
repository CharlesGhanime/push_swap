/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 00:32:27 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/02 18:08:01 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		rotate_a(t_ps *ps)
{
	int *tmp;
	int i;

	tmp = a;
	i = len_a;
	while (i-- > 0)
	{
		if (i == 0)
			a[len_a] = tmp[0];
		else
			a[i - 1] = tmp[i];
	}
	write (1, "ra\n", 3);
	return (0);
}


int		rotate_b(t_ps *ps)
{
	int *tmp
	int i;

	head = b;
	i = len_b;
	while (i-- > 0)
	{
		if (i == 0)
			b[len_b] = tmp[0];
		else
			b[i - 1] = tmp[i];
	}
	write (1, "rb\n", 3);
	return (0);
}

int		rotate_r(t_ps *ps)
{
	int *tmp;
	int i;

	tmp = a;
	i = len_a;
	while (i-- > 0)
	{
		if (i == 0)
			a[len_a] = tmp[0];
		else
			a[i - 1] = tmp[i];
	}
	tmp = b;
	i = len_b;
	while (i-- > 0)
	{
		if (i == 0)
			b[len_b] = tmp[0];
		else
			b[i - 1] = tmp[i];
	}
	write(1, "rr\n", 3);
	return (0);
}
