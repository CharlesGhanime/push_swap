/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:28:05 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/19 04:36:51 by cghanime         ###   ########.fr       */
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
	intmax_t	*a;
	intmax_t	*b;
	uintmax_t	len_a;
	uintmax_t	len_b;
	uintmax_t	args_nb;
	uintmax_t	mv_nb;
	uintmax_t	pivot;
}				t_ps;

/*
** Swap Functions
*/

/*
** Push Functions
*/

/*
** Rotate Functions
*/

/*
** Reverse Rotate Functions
*/

#endif
