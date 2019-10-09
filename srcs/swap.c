/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:34:01 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 17:00:20 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		swap_a(t_ps *ps)
{
	int tmp;
	int i;
	int j;

	i = 0;
	j = 1;
	tmp = ps->a[i];
	ps->a[i] = ps->a[j];
	ps->a[j] = tmp;
	write(1, "sa\n", 3);
	return (0);
}

int		swap_b(t_ps *ps)
{
	int tmp;
	int i;
	int j;

	i = 0;
	j = 1;
	tmp = ps->b[i];
	ps->b[i] = ps->b[j];
	ps->b[j] = tmp;
	write(1, "sb\n", 3);
	return (0);
}

int		swap_ss(t_ps *ps)
{
	int tmp_a;
	int tmp_b;
	int i;
	int j;

	i = 0;
	j = 1;
	tmp_a = ps->a[i];
	ps->a[i] = ps->a[j];
	ps->a[j] = tmp_a;
	tmp_b = ps->b[i];
	ps->b[i] = ps->b[j];
	ps->b[j] = tmp_b;
	write(1, "ss\n", 3);
	return (0);
}
