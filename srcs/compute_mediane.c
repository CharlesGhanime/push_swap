/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_mediane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 17:09:24 by cghanime         ###   ########.fr       */
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
	i = len;
	j = 0;
	while (i > 0)
	{
		if (tab[j] > tab[j - 1] && i > 0)
		{
			printf("if boucle mediane 1\n");
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

	printf("pre malloc\n");
	med = (int *)malloc(sizeof(int) * ps->len_a);
	tmp = (int *)malloc(sizeof(int) * ps->len_a);
	printf("post malloc\n");
	ps->a = swapping(ps->a, ps->len_a);
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
		printf("boucle mediane 2\n");
		printf("boucle mediane 2 i = %d\n", i);
		if (ps->a[j] < ps->a[j - 1])
		{
			if (i == 1 || i == 0)
				return (ps->a);
			else
			{
				printf("if boucle mediane 2\n");
				i--;
				j++;
			}
		}
		else
			compute_mediane(ps);
	}
	return (ps->a);
}

int		pivot_pickup(t_ps *ps)
{
	if (ps->len_a % 2 != 0)
		ps->pivot = ps->a[(ps->len_a / 2)];
	else
	{
		ps->pivot = ((ps->a[(ps->len_a / 2)] + ps->a[ps->len_a / 2 - 1]) / 2);
	}
	return (ps->pivot);
}
