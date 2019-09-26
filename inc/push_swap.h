/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:28:05 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/26 16:05:41 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
** Data Structures
*/

typedef struct	s_ps
{
	int			*a;
	int			*b;
	int			len_a;
	int			len_b;
	int			args_nb;
	int			mv_nb;
	int			pivot;
}				t_ps;

/*
** Swap Functions
*/

int		swap_a(t_ps *ps);
int		swap_b(t_ps *ps);
int		swap_ss(t_ps *ps);

/*
** Push Functions
*/

int		push_a(t_ps *ps);
int		push_b(t_ps *ps);

/*
** Rotate Functions
*/

int		rotate_a(t_ps *ps);
int		rotate_b(t_ps *ps);
int		rotate_r(t_ps *ps);

/*
** Reverse Rotate Functions
*/

int		reverse_rotate_a(t_ps *ps);
int		reverse_rotate_b(t_ps *ps);
int		reverse_rotate_r(t_ps *ps);

/*
** Push Swap Functions
*/

int		*mediane(t_ps *ps);
int		pivot_pickup(t_ps *ps);


#endif
