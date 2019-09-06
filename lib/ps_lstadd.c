/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:36:21 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 15:04:23 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
/*
t_list	*ps_lstadd(t_list **head)
{
	t_list	*element;

	if (*head && !(*head)->next)
	{
		if (!(element = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		element->value = 0;
		element->next = NULL;
		(*head)->next = element;
	}
	if ((*head)->next)
	{
		while ((*head)->next && (*head)->next->next)
		{
			(*head) = (*head)->next;
		}
		if (!(element = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		element->value = 0;
		element->next = NULL;
		(*head)->next = element;
	}
	return (element);
}*/

t_list	*ps_lstadd(t_list **head, int value)
{
	t_list	*element;
	t_list	*run;

	element = (t_list *)malloc(sizeof(t_list));
	if (element != NULL)
	{
		element->value = value;
		element->next = NULL;
		if (*head == NULL)
			*head = element;
		else
		{
			run = *head;
			while (run->next != NULL)
				run = run->next;
			run->next = element;
		}
	}
	return (element);
}
