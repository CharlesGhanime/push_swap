/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_mediane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/30 20:55:37 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
//#include <libc.h>

int		*mediane(t_ps *ps)
{
	int *med;
	int *tmp;
	int i;
	int j;

	printf("pre malloc\n");
	med = (int *)malloc(sizeof(int) * ps->len_a);
	tmp = (int *)malloc(sizeof(int) * ps->len_a);
	printf("post malloc\n");
	med = ps->a;
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
		printf("boucle mediane 1\n");
		if (med[j] > med[j - 1] && i > 0)
		{
			printf("if boucle mediane 1\n");
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
		printf("boucle mediane 2\n");
		if (med[j] < med[j - 1])
		{
			printf("if boucle mediane 2\n");
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

	ps = (t_ps *)malloc(sizeof(t_ps));
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
	ps->b = (int *)malloc(sizeof(int) * ps->len_a);
	i = argc - 1;
	j = 0;
	while (i > -1)
	{
		printf("boucle main 1\n");
		printf("i = %d\n", i);
		printf("argv[%d] = %d\n", i, atoi(argv[i]));
		ps->a[j] = atoi(argv[i]);
		i--;
		j++;
	}
	printf("argc = %d\n", argc);
//	ps->a = mediane(ps);
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
		printf("boucle main 2\n");
		printf("a[%d] ", j);
		printf("-> [%d]\n", ps->a[j]);
		i--;
		j++;
	}
//	ps->pivot = pivot_pickup(ps);
//	printf("pivot = %d\n", ps->pivot);
	free(ps->a);
	free(ps->b);
	free (ps);
}
