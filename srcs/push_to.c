/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:46:29 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/08 18:24:21 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../inc/push_swap.h"

int		push_a_to_b(t_ps *ps, int size)
{
	int i;
	int push_counter;
	int rot_counter;

	i = 0;
	push_counter = 0;
	while (i < ps->len_a)
	{
		if (ps->a[i] <= ps->pivot)
		{
			push_a(ps);
			push_counter++;
		}
		else
		{
			rotate_a(ps);
			rot_counter++;
		}
		i++;
	}
	i = 0;
	if (rot_counter)
		while (i < rot_counter)
		{
			reverse_rotate_a(ps);
			i++;
		}
	return (push_counter);
}

int		push_b_to_a(t_ps *ps, int size)
{
	int i;
	int push_counter;

	i = 0;
	push_counter= 0;
	while (i < ps->push_len)
	{
		push_b(ps);
		i++;
		push_counter++;
	}
	return (push_counter);
}

int main(int argc, const char **argv)
{
	t_ps *ps;
	int i;

	init_ps(ps, argc - 1);
	i = argc;
	while (i > -1)
	{
		ps->a[i] = atoi(argv[i]);
		i--;
	}
	i = 0;
	while (i < argc - 1)
	{
		printf("[%d] -> ", ps->a[i]);
		i++;
	}
	return 0;
}
