/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/26 16:52:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		*mediane(t_ps *ps)
{
	int *med;
	int *tmp;
	int i;
	int j;

	med = (int *)malloc(sizeof(int) * ps->len_a);
	tmp = (int *)malloc(sizeof(int) * ps->len_a);
	med = ps->a;
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
		if (med[j] > med[j - 1] && j > 0)
		{
			tmp[0] = med[j];
			med[j] = med[j - 1];
			med[j - 1] = tmp[0];
		}
		i--;
		j++;
	}
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
		if (med[j] < med[j - 1] && j > 0)
		{
			i--;
			j++;
		}
		else
			mediane(ps);
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


int main(int argc, char **argv)
{
	t_ps *ps;
	int i;
	int j;

	ps->a = NULL;
	ps->b = NULL;
	ps->len_a = 0;
	ps->len_b = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;

	ps->len_a = argc - 1;
	printf("%d\n", ps->len_a);
	ps->a = (int *)malloc(sizeof(int) * ps->len_a);
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
	printf("coucou2");
		ps->a[j] = atoi(argv[i]);
		i--;
		j++;
	}
	printf("%d\n", argc);
	ps->a = mediane(ps);
	i = ps->len_a;
	while (i > 0)
	{
		printf("a[%d] ", i);
		printf("-> [%d]\n", ps->a[i]);
		i++;
	}
	ps->pivot = pivot_pickup(ps);
	printf("pivot = %d\n", ps->pivot);
}
