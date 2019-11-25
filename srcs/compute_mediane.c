/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_mediane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 16:28:05 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
//#include <libc.h>

static int64_t		*swapping(int64_t *tab, size_t len)
{
	size_t	i;
	size_t	j;
	int64_t *tmp;

	tmp = (int64_t *)malloc(sizeof(int64_t) * len);
	tmp = (int64_t *)malloc(sizeof(int64_t) * len);
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

int64_t		*compute_mediane(t_ps *ps)
{
	int64_t *med;
	int64_t *tmp;
	int64_t i;
	int64_t j;

	med = (int64_t *)malloc(sizeof(int64_t) * ps->len_a);
	tmp = (int64_t *)malloc(sizeof(int64_t) * ps->len_a);
	med = init_stack(med, ps->len_a);
	tmp = init_stack(tmp, ps->len_a);
	ps->a = swapping(ps->a, ps->len_a);
	i = ps->len_a;
	j = 0;
	printf("compute_mediane\n");
	printf("compute_mediane ps->len_a = %ld\n", ps->len_a);
	PSA;
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

int64_t		pivot_pickup(t_ps *ps)
{
	if (ps->len_a % 2 != 0)
		ps->pivot = ps->mediane[(ps->len_a / 2)];
	else
	{
		ps->pivot = ((ps->mediane[(ps->len_a / 2)] + (ps->mediane[(ps->len_a - 1) / 2]) / 2));
	}
	return (ps->pivot);
}
