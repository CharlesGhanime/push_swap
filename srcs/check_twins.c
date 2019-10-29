/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_twins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:37:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/28 18:07:56 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		check_twins(t_ps *ps, int value)
{
	int i;

	i = 0;
	while (i < ps->len_a)
	{
		if (ps->a[i] == value)
		{
			write (1, "Error\n", 6);
			exit (1);
		}
		i++;
	}
	return (0);
}
