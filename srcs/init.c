/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:42:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/31 20:27:22 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_ps	*init_ps(t_ps *ps, int len)
{
	ps = (t_ps *)malloc(sizeof(t_ps));
	ps->a = NULL;
	ps->b = NULL;
	ps->mediane = NULL;
	ps->a = (int *)malloc(sizeof(int) * len);
	ps->b = (int *)malloc(sizeof(int) * len);
	ps->a = init_tab(ps->a, len);
	ps->b = init_tab(ps->b, len);
	ps->len_a = len;
	ps->len_b = 0;
	ps->push_len = 0;
	ps->recur_size = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
	return (ps);
}

int		*init_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}

int		free_ps(t_ps *ps)
{
	free(ps->a);
	free(ps->b);
	ps->a = NULL;
	ps->b = NULL;
	ps->mediane = NULL;
	ps->len_a = 0;
	ps->len_b = 0;
	ps->push_len = 0;
	ps->recur_size = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
	free(ps);
	ps = NULL;
	return (0);
}
