/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tabs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:54:43 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 15:55:38 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int64_t		check_rising(int64_t *stack, size_t stack_size)
{
	size_t	i;
	size_t	count;

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

int64_t		check_falling(int64_t *stack, size_t stack_size)
{
	size_t	i;
	size_t	count;

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
