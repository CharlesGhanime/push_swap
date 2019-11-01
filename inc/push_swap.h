/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:28:05 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/01 20:20:11 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"

#define ptf printf;
#define cc "printf";
#define ptfa print_stack("ps->a", ps->a, ps->len_a);
#define ptfb print_stack("ps->b", ps->b, ps->len_b);
#define ptfla printf("len_a = %d\n", ps->len_a);
#define ptflb printf("len_b = %d\n", ps->len_b);
#define filltab int i=0; while (argc > 1) { ps->a[i] = ft_atoi(argv[i + 1]); argc--; i++;}

/*
** Data Structures
*/

typedef struct	s_ps
{
	int			*a;
	int			*b;
	int			*mediane;
	int			len_a;
	int			len_b;
	int			push_len;
	int			recur_size;
	int			args_nb;
	int			mv_nb;
	int			pivot;
}				t_ps;


/*
** Data Structure Management Functions
*/

t_ps		*init_ps(t_ps *ps, int len);
int			*init_tab(int *tab, int size);
int			free_ps(t_ps *ps);

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
** Reverse Rotate Functions
*/

int		check_twins(t_ps *ps, int value);
int		check_rising(int *stack, int stack_size);
int		check_falling(int *stack, int stack_size);

/*
** Push Swap Functions
*/

int		*master_a_to_b(t_ps *ps, int size);
int		*master_b_to_a(t_ps *ps, int size);
int		push_a_to_b(t_ps *ps, int size);
int		push_b_to_a(t_ps *ps, int size);
int		*compute_mediane(t_ps *ps);
int		pivot_pickup(t_ps *ps);

/*
** Debugging Functions
*/

int		print_stack(char *name, int * stack, size_t len);

#endif
