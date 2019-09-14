/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 15:11:15 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/14 19:35:29 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ps_free(t_list *lst_a, t_list *lst_b)
{
	t_node *tmp;
	t_node *element;

	tmp = lst_a->head;
	element = lst_a->head->next;
	while (element)
	{
		free(tmp);
		tmp = element;
		element = element->next;
	}
	free(tmp);
	free(lst_b);
}

int		main(int argc, char **argv)
{
	t_list *lst_a;
	t_list *lst_b;
	long nb;
	int i;

	i = 1;
	lst_a = ps_lstnew();
	lst_b = ps_lstnew();
	if (argc < 1 || lst_a == NULL || lst_b == NULL)
		ps_error();
	if (argc == 1)
		return (0);
	while (argc-- > 1)
	{
		nb = ps_atoi(argv[i++]);
		ps_check_double(lst_a, (int)nb);
		lst_a = ps_lstadd(lst_a, (int)nb);
	}
	ps_main_algo(lst_a, lst_b, lst_a->head);
	ps_free(lst_a, lst_b);
}
