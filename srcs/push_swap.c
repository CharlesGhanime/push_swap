/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:48:50 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/31 20:27:25 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		main(int argc, char **argv)
{
	t_ps *ps;
	int nb;
	int i;

	ps = NULL;
	ps = init_ps(ps, argc - 1);
	ps->len_a = argc;
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
		nb = ft_atoi(argv[i + 1]);
		check_twins(ps, nb);
		ps->a[i] = nb;
		argc--;
		i++;
	}
	master_a_to_b(ps, ps->len_a);
	free_ps(ps);
	return (0);
}
