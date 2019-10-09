/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:48:50 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 14:38:57 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		main(int argc, char **argv)
{
	t_ps *ps;
	int nb;
	int i;

	init_struct(ps);
	if (argc < 1 || a == NULL || b == NULL)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	if (argc == 1)
		return (0);
	i = 0;
	while (argc-- > 1)
	{
		nb = ft_atoi(argv[i++]);
		check_twins(ps, nb);
		ps->a[i] = nb;
		i++;
	}
	algo(ps);
	free(ps);
	return (0);
}
