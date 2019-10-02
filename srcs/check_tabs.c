/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:54:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/02 18:34:46 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_rising(t_ps *ps)
{
	int i;

	i = 0;
	while (i + 1 < ps->len_a)
	{
		if (ps->a[i] > ps->a[i + 1])
			count++;
		i++;
	}
	if  (count == ps->len_a)
		return (1);
	return (0);
}

int		check_falling(t_ps *ps)
{
	int i;

8	i = 0;
	while (i + 1 < len_a)
	{
		if (a[i] < a[i + 1])
			count++;
		i++;
	}
	if (count = ps->len_a)
		return (1)
	return (0);
}
