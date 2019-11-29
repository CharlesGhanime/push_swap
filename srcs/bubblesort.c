/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 23:53:44 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/29 02:08:40 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void				swap(int64_t *stack_a, int64_t *stack_b)
{
	int64_t tmp;

	tmp = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
}

int64_t					*bubblesort(int64_t *stack, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (stack[j] > stack[j + 1])
				swap(&stack[j], &stack[j + 1]);
			j++;
		}
		i++;
	}
	return (stack);
}
/*
static void				print_stacks(int64_t *stack, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		printf("stack[%zu] = %lld\n", i, stack[i]);
		i++;
	}
}
*/
int64_t		pivot_pickup(t_ps *ps)
{
//	if (ps->len_a % 2 == 0)
	ps->pivot = ps->mediane[(ps->len_a / 2)];
//	else
	{
//		ps->pivot = ((ps->mediane[(ps->len_a / 2)] + (ps->mediane[(ps->len_a - 1) / 2]) / 2));
	}
	return (ps->pivot);
}
/*
int						main(void)
{
	int64_t stack[] = {64, 34, 25, 12, 22, 11, 90};
	size_t n = sizeof(stack);
	printf("Sizeof(stack) = %zu\n", n);
	size_t o = sizeof(stack[0]);
	printf("Sizeof(stack[0]) = %zu\n", n);
	size_t len = n/o;
	printf("len = %zu\n", len);
	print_stacks(stack, len);
	bubblesort(stack, len);
	printf("Sorted stack: \n");
	print_stacks(stack, len);
	return (0);
}
*/
