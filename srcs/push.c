/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:42:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/30 14:50:17 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		push_a(t_ps *ps)
{
	if (/*ps->a[0] == 0 ||*/ ps->len_a == 0)
		return (-1);
	ps->a[ps->len_a] = ps->b[ps->len_b];
	printf("push_a ps->b[ps->len_b] = %d\n", ps->b[ps->len_b]);
	ps->len_a -= 1;
	ps->len_b += 1;
	write(1, "pa\n", 3);
	return (0);
}

int		push_b(t_ps *ps)
{
//	if (/*ps->b[0] == 0 || */ps->len_b == 0)
//		return (-1);
	ps->b[ps->len_b] = ps->a[ps->len_a];
	ps->len_b -= 1;
	ps->len_a += 1;
	write(1, "pb\n", 3);
	return (0);
}

/*
int main()
{
	t_ps *ps;

	ps->len_a = 4;
	ps->len_b = 4;
	ps = init_ps(ps, ps->len_a);
	ps->len_a = 4;
	ps->len_b = 4;
	ps->a[0] = 1;
	ps->a[1] = 2;
	ps->a[2] = 3;
	ps->a[3] = 4;
	printf("ps->b[0] = %d\n", ps->b[0]);
	printf("ps->b[1] = %d\n", ps->b[1]);
	printf("ps->b[2] = %d\n", ps->b[2]);
	printf("ps->b[3] = %d\n", ps->b[3]);
	ps->b = init_tab(ps->b, ps->len_b);
	printf("ps->b[0] = %d\n", ps->b[0]);
	printf("ps->b[1] = %d\n", ps->b[1]);
	printf("ps->b[2] = %d\n", ps->b[2]);
	printf("ps->b[3] = %d\n", ps->b[3]);
	if (push_b(ps) == -1)
	{
		printf("FAILURE\n");
		exit(-1);
	}
	printf("ps->b[0] = %d\n", ps->b[0]);
	printf("ps->b[1] = %d\n", ps->b[1]);
	printf("ps->b[2] = %d\n", ps->b[2]);
	printf("ps->b[3] = %d\n", ps->b[3]);
	printf("%zu\n", sizeof(void));
	printf("%zu\n", sizeof(void *));
	return (0);
}*/
