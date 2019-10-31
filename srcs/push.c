/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:42:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/31 20:27:20 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		push_a(t_ps *ps)
{
	if (ps->len_b == 0)
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
	if (ps->len_a == 0)
		return (-1);
	ps->b[ps->len_b - 1] = ps->a[ps->len_a - 1];
	ps->len_b += 1;
	ps->len_a -= 1;
	write(1, "pb\n", 3);
	return (0);
}

int main(int argc, char **argv)
{
	t_ps *ps;

	ps = init_ps(ps, argc - 1);

	filltab;
	ptfa;
	ptfb;
	ptfla;
	ptflb;
	if (push_b(ps) == -1)
	{
		printf("FAILURE\n");
		exit(-1);
	}
	push_b(ps);
	ptfa;
	ptfb;
	return (0);
}
