/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:34:01 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/19 04:45:36 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		swap_a(t_ps *ps)
{
	char *tmp;
	int i;
	int j;

	i = 0;
	j = 1;
	tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
	write(1, "sa\n", 3);
	return (0);
}

int		swap_b(t_ps *ps)
{
	char *tmp;
	int i;
	int j;

	i = 0;
	j = 1;
	tmp = b[i];
	b[i] = b[j];
	b[j] = tmp;
	write(1, "sb\n", 3);
	return (0);
}

int		swap_ss(t_ps *ps)
{
	char *tmp_a;
	char *tmp_b;
	int i;
	int j;

	i = 0;
	j = 1;
	tmp_a = a[i];
	a[i] = a[j];
	a[j] = tmp_a;
	tmp_b = b[i];
	b[i] = b[j];
	b[j] = tmp_b;
	write(1, "ss\n", 3);
	return (0);
	
}
