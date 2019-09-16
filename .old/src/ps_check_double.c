/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 05:07:39 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/15 19:42:25 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_check_double(t_list *lst, int value)
{
	t_node	*element;

	if (lst)
	{
		element = lst->head;
		while (element)
		{
			if (element->value == value)
			{
//				ps_error();
				write(2, "Error\n", 6);
				exit(1);
			}
			element = element->next;
		}
	}
}
