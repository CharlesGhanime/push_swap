/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 05:04:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/09 05:18:33 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		check_list_sorted(t_list *stack, t_list **head)
{
	t_list *tmp;

	*head = stack;
	tmp = stack;
	while (tmp->next)
	{
		if (tmp->value < tmp->next->value)
			continue;
		else
			return (-1);
		tmp = tmp->next;
	}
	return (0);
}

int		check_list_reverse_sorted(t_list *stack, t_list **head)
{
	t_list *tmp;

	*head = stack;
	tmp = stack;
	while (tmp->next)
	{
		if (tmp->value > tmp->next->value)
			continue;
		else
			return (-1);
		tmp = tmp->next;
	}
	return (0);
}
