/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_twins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:37:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/24 21:46:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_twins(t_ps *ps, int value)
{
	int i;

	i = 0;
	while (i < len_a)
	{
		if (a[i] == value)
		{
			write (1, "Error\n", 6);
			exit (1);
		}
		i++;
	}
}
