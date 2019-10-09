/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:54:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/09 16:29:35 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		check_rising(int *stack, int stack_size)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i + 1 < stack_size)
	{
		if (stack[i] > stack[i + 1])
			count++;
		i++;
	}
	if  (count == stack_size)
		return (1);
	return (0);
}

int		check_falling(int *stack, int stack_size)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i + 1 < stack_size)
	{
		if (stack[i] < stack[i + 1])
			count++;
		i++;
	}
	if (count == stack_size)
		return (1);
	return (0);
}
