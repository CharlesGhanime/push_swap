/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 16:46:29 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/30 01:09:18 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int64_t		push_a_to_b(t_ps *ps, size_t size)
{
	size_t	i;
	size_t	push_counter;
	size_t	rot_counter;

	i = 0;
	push_counter = 0;
	rot_counter = 0;
	printf("push a to b\n");
	PSA;
	PTF("<----------------------------------------->\n");
	while (i < size)
	{
		if (ps->a[i] <= ps->pivot)
		{
			push_b(ps);
			push_counter++;
			PTF("push_counter = %zu\n", push_counter);
		}
		else
		{
			rotate_a(ps);
			rot_counter++;
			PTF("rot_counter = %zu\n", rot_counter);
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
	PSA;
//	size_t r = 0;
//	while (r < ps->len_b)
//	{
//		r++;
//	}
	return (push_counter);
}

int64_t		push_b_to_a(t_ps *ps, size_t size)
{
	size_t i;
	size_t push_counter;

	i = 0;
	push_counter= 0;
	while (i < size)
	{
		push_a(ps);
		i++;
		push_counter++;
	}
	return (push_counter);
}
/*
   int main(int argc, const char **argv)
   {
   t_ps *ps;
   int i;
   int j;

   ps = NULL;
   ps = init_ps(ps, argc);
   printf(" ps->push_len = %d\n", ps->push_len);
   i = argc - 1;
   j = 0;
   ps->len_a = argc;
   ps->pivot = 3;
   printf("COUCOU!\n");
   while (i > 0)
   {
   printf("COUCOU2!\n");
   ps->a[j] = atoi(argv[i]);
   printf("ps->a[%d] = %d\n", i, atoi(argv[i]));
   i--;
   j++;
   }
   i = 0;
   while (i < argc - 1)
   {
   printf("[%d] -> ", ps->a[i]);
   i++;
   }
   ps->push_len = push_a_to_b(ps, 2);
   printf(" ps->push_len = %d\n", ps->push_len);
   i = 0;
   while (i < ps->len_a)
   {
   printf("[%d] -> ", ps->a[i]);
   i++;
   }
   i = 0;
   while (i < ps->len_b)
   {
   printf("[%d] -> ", ps->b[i]);
   i++;
   }
   return 0;
   }
   */
