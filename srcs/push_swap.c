/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:48:50 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/29 22:38:55 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		main(int argc, char **argv)
{
	t_ps *ps;
	int nb;
	int i;

	ps = NULL;
	ps = init_ps(ps, argc);
//	printf("Hello coucou\n");
	ps->len_a = argc - 1;
	if (argc < 2 || ps->a == NULL || ps->b == NULL)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	if (argc == 1)
		return (0);
	i = 0;
	while (argc > 1)
	{
//		printf("argc = %d\n", argc);
		nb = ft_atoi(argv[i + 1]);
		check_twins(ps, nb);
		ps->a[i] = nb;
//		printf("ps->a = %d\n", ps->a[i]);
		argc--;
		i++;
	}
//	printf("ps->len_a = %d\n", ps->len_a);
//	ps->mediane = compute_mediane(ps);
	int k = 0;
	while (k < ps->len_a)
	{
		printf("ps->a[%d] = %d\n", k, ps->a[k]);
		k++;
	}
//	ps->pivot = pivot_pickup(ps);
//	printf("ps->pivot = %d\n", ps->pivot);
	printf("ps->len_a = %d\n", ps->len_a);
	master_a_to_b(ps, ps->len_a);
	free_ps(ps);
	return (0);
}
