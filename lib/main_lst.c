/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:59:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/09 04:28:42 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int main(int argc, char **argv)
{
	t_list *head_a;
	t_list *elements_a;
	t_list *head_b;
	int i;

	i = 1;
	head_a = NULL;
	head_b = NULL;
	while (i < argc)
	{
		elements_a = ps_lstadd(&head_a, ps_atoi(argv[i]));
		i++;
	}
	while (head_a)
	{
		printf("%d->", head_a->value);
		head_a = head_a->next;
	}


	return (0);
}
