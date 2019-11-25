/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:28:05 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/25 19:18:52 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "../libft/libft.h"

# define FALSE		0
# define TRUE		1
# define END		UINT_MAX
# define PTF		printf
# define PSA		print_stack("ps->a = ", ps->a, ps->len_a)
# define PSB		print_stack("ps->b = ", ps->b, ps->len_b)
# define PFLA		printf("len_a = %lu\n", ps.len_a)
# define PFLB		printf("len_b = %lu\n", ps.len_b)
# define FILLTB		int64_t i=0; while (argc > 1) { ps->a[i] = ft_atoi(argv[i + 1]); argc--; i++;}

/*
** Data Structures
*/

typedef struct	s_ps
{
	int64_t			*a;
	int64_t			*b;
	int64_t			*mediane;
	size_t		len_a;
	size_t		len_b;
	size_t		push_len;
	size_t		recur_size;
	uint64_t	args_nb;
	size_t		mv_nb;
	int64_t		pivot;
}				t_ps;

/*
** Data Structure Management Functions
*/

void		init_ps(t_ps *ps, size_t len);
int64_t		*init_stack(int64_t *tab, size_t size);
void		init_tab(char ***tab);
int64_t		free_ps(t_ps *ps);

/*
** Swap Functions
*/

int64_t		swap_a(t_ps *ps);
int64_t		swap_b(t_ps *ps);
int64_t		swap_ss(t_ps *ps);

/*
** Push Functions
*/

int64_t		push_a(t_ps *ps);
int64_t		push_b(t_ps *ps);

/*
** Rotate Functions
*/

int64_t		rotate_a(t_ps *ps);
int64_t		rotate_b(t_ps *ps);
int64_t		rotate_r(t_ps *ps);

/*
** Reverse Rotate Functions
*/

int64_t		reverse_rotate_a(t_ps *ps);
int64_t		reverse_rotate_b(t_ps *ps);
int64_t		reverse_rotate_r(t_ps *ps);

/*
** Reverse Rotate Functions
*/

uint8_t		check_twins(t_ps *ps, int64_t value);
int64_t		check_rising(int64_t *stack, size_t stack_size);
int64_t		check_falling(int64_t *stack, size_t stack_size);

/*
** Push Swap Functions
*/

int64_t		*master_a_to_b(t_ps *ps, size_t size);
int64_t		*master_b_to_a(t_ps *ps, size_t size);
int64_t		push_a_to_b(t_ps *ps, size_t size);
int64_t		push_b_to_a(t_ps *ps, size_t size);
int64_t		*compute_mediane(t_ps *ps);
int64_t		pivot_pickup(t_ps *ps);
uint64_t	arg_size(char **arg);
int64_t		*fill_stack_a(int64_t *stack_a, char **arg);
//char	**get_arg(char ** av);

/*
** Debugging Functions
*/

int64_t		print_stack(char *name, int64_t *stack, size_t len);

#endif
