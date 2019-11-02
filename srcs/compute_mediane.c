/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_mediane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/01 16:24:23 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
//#include <libc.h>

static int*		swapping(int *tab, int len)
{
	int i;
	int j;
	int *tmp;

	tmp = (int *)malloc(sizeof(int) * len);
	tmp = (int *)malloc(sizeof(int) * len);
	i = len;
	j = 0;
	while (i > 0)
	{
		if (tab[j] > tab[j - 1] && i > 0)
		{
			tmp[0] = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp[0];
		}
		i--;
		j++;
	}
	free(tmp);
	return (tab);
}

int		*compute_mediane(t_ps *ps)
{
	int *med;
	int *tmp;
	int i;
	int j;

	med = (int *)malloc(sizeof(int) * ps->len_a);
	tmp = (int *)malloc(sizeof(int) * ps->len_a);
	med = init_tab(med, ps->len_a);
	tmp = init_tab(tmp, ps->len_a);
	ps->a = swapping(ps->a, ps->len_a);
	i = ps->len_a;
	j = 0;
	printf("compute_mediane\n");
	printf("compute_mediane ps->len_a = %d\n", ps->len_a);
	ptfa;
	while (i > 0)
	{
		if (ps->a[j] < ps->a[j - 1])
		{
			if (i == 1 || i == 0)
				return (ps->a);
			else
			{
				i--;
				j++;
			}
		}
		else
			compute_mediane(ps);
	}
	free(med);
	free(tmp);
	return (ps->a);
}

int		pivot_pickup(t_ps *ps)
{
	if (ps->len_a % 2 != 0)
		ps->pivot = ps->mediane[(ps->len_a / 2)];
	else
	{
		ps->pivot = ((ps->mediane[(ps->len_a / 2)] + (ps->mediane[(ps->len_a - 1) / 2]) / 2));
	}
	return (ps->pivot);
}
