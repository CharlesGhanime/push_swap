/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_get_head_and_tail.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:04:36 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/10 17:47:48 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_ab	init_ab(t_ab ab)
{
	ab->a = ps_lstnew();
	ab->b = ps_lstnew();
	ab->(*head) = NULL;
	ab->(*tail) = NULL;
	return (ab)
}

t_ab	*get_ab_head(t_ab ab)
{
	t_ab *a;
	t_ab *b;

	a = init_ab(*a);
	b = init_ab(*b);
	while ()
}
