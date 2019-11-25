/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_twins.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:37:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 16:07:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

uint8_t		check_twins(t_ps *ps, int64_t value)
{
	size_t	i;

	i = 0;
	while (i < ps->len_a)
	{
		if (ps->a[i] == value)
		{
			write (1, "Error\n", 6);
			return (FALSE);
		}
		i++;
	}
	return (TRUE);
}
