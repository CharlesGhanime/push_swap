/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:59:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 15:29:41 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_list *head;
	t_list *element;
	int i;

	i = 1;
	head = NULL;
	while (i < argc)
	{
		element = ps_lstadd(&head, ps_atoi(argv[i]));
		i++;
	}

	/*head->value = 1;
	node_1 = ps_lstadd(&head);
	node_1->value = 2;
	node_2 = ps_lstadd(&head);
	node_2->value = 3;
	node_3 = ps_lstadd(&head);
	node_3->value = 4;
	node_4 = ps_lstadd(&head);
	node_4->value = 5;*/
	while (head)
	{
		printf("%d->", head->value);
		head = head->next;
	}
	return (0);
}
