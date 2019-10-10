/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:42:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/10 20:29:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_ps	*init_ps(t_ps *ps, int len)
{
	ps = (t_ps *)malloc(sizeof(t_ps));
	ps->a = NULL;
	ps->b = NULL;
	ps->a = (int *)ft_ptrnew(len);
	ps->b = (int *)ft_ptrnew(len);
	ps->len_a = 0;
	ps->len_b = 0;
	ps->push_len = 0;
	ps->recur_size = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
	return (ps);
}

int		free_ps(t_ps *ps)
{
	free(ps->a);
	free(ps->b);
	ps->a = NULL;
	ps->b = NULL;
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
