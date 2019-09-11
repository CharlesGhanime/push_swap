/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:37:08 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/11 17:44:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	*ps_lstnew(void)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (new != NULL)
	{
		new->argc = 0;
		new->coup = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}
