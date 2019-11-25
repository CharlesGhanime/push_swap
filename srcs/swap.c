/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:34:01 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 16:16:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int64_t		swap_a(t_ps *ps)
{
	int64_t tmp;
	size_t i;
	size_t j;

	i = 0;
	j = 1;
	tmp = ps->a[i];
	ps->a[i] = ps->a[j];
	ps->a[j] = tmp;
	write(1, "sa\n", 3);
	return (0);
}

int64_t		swap_b(t_ps *ps)
{
	int64_t tmp;
	size_t i;
	size_t j;


	i = 0;
	j = 1;
	tmp = ps->b[i];
	ps->b[i] = ps->b[j];
	ps->b[j] = tmp;
	write(1, "sb\n", 3);
	return (0);
}

int64_t		swap_ss(t_ps *ps)
{
	int64_t tmp_a;
	int64_t tmp_b;
	size_t i;
	size_t j;

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
