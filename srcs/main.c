/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:52:14 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/25 19:07:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_ps *ps;
	int i;
	int j;

	ps = NULL;
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
	while (i < ps->len_a)
	{
		ps->a[i] = 0;
		printf("init ps->a[i = %d\n", ps->a[i]);
		i++;
	}
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
	ps->a = compute_mediane(ps);
	i = ps->len_a;
	j = 0;
	while (i > 0)
	{
		printf("boucle main 2\n");
		printf("a[%d] -> [%d]\n", j, ps->a[j]);
		i--;
		j++;
	}
	ps->pivot = pivot_pickup(ps);
	printf("pivot = %d\n", ps->pivot);
	free_ps(ps);
}
