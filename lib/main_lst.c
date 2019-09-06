/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:59:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 16:20:03 by cghanime         ###   ########.fr       */
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
	while (head)
	{
		printf("%d->", head->value);
		head = head->next;
	}
	return (0);
}
