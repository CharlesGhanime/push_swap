/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:42:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 02:49:50 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	init_ps(t_ps *ps, int len)
{
	ps->a = NULL;
	ps->b = NULL;
	ps->mediane = NULL;
	ps->a = (int *)malloc(sizeof(int) * len);
	ps->b = (int *)malloc(sizeof(int) * len);
	ps->a = init_stack(ps->a, len);
	ps->b = init_stack(ps->b, len);
	ps->len_a = len;
	ps->len_b = 0;
	ps->push_len = 0;
	ps->recur_size = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
}

int		*init_stack(int *tab, int size)
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

char	**init_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		tab[i] = NULL;
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
