/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:42:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/20 19:28:11 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ps	*init_struct(t_ps *ps)
{
	ps->a = NULL;
	ps->b = NULL;
	ps->len_a = 0;
	ps->len_b = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
	return (ps);
}


