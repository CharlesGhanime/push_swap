/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:00:13 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/16 16:00:35 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct			s_node
{
	int					value;
	struct s_node		*next;
}						t_node;

typedef struct			s_list
{
	size_t				argc;
	size_t				coup;
	struct s_node		*head;
	struct s_node		*tail;
}						t_list;

/*
typedef struct			s_list
{
	int					value;
	struct s_list		*next;
}						t_list;

typedef struct			s_ab
{
	t_list				*a;
	t_list				*b;
	t_list				**head;
	t_list				**tail;
}						t_ab;

typedef struct			s_head
{
	t_list				*head;
	t_list				*tail;
}						t_head;
*/
/*
** LIBRARY FUNCTIONS
*/

int						ps_atoi(char *str);
int						ps_isdigit(int c);
t_list					*ps_lstadd(t_list *lst, int value);
t_list					*ps_lstnew(void);
void					ps_putchar(char c);
void					ps_putnbr(int n);
void					ps_putstr(char const *s);
char					*ps_strcat(char *dst, char *src);
int						ps_strlen(char *s);

/*
** UTILS FUNCTIONS
*/

//t_ab					init_stacks(t_ab stack);
//t_ab					*get_stack_head(t_ab stack);

void					ps_ok(void);
void					ps_ko(void);
void					ps_error(void);
void					ps_check_double(t_list *lst, int value);

/*
** SWAP FUNCTIONS
*/

void					ps_swap_a(t_list *lst_a, t_list *lst_b);
void					ps_swap_b(t_list *lst_a, t_list *lst_b);
void					ps_swap_ss(t_list *lst_a, t_list *lst_b);

/*
** PUSH FUNCTIONS
*/

void					ps_push_a(t_list *lst_a, t_list *lst_b);
void					ps_push_b(t_list *lst_a, t_list *lst_b);
void					ps_push_ss(t_list *lst_a, t_list *lst_b);

/*
** ROTATE FUNCTIONS
*/

void					ps_rotate_a(t_list *lst_a, t_list *lst_b);
void					ps_rotate_b(t_list *lst_a, t_list *lst_b);
void					ps_rotate_rr(t_list *lst_a, t_list *lst_b);

/*
** REVERSE ROTATE FUNCTIONS
*/

void					ps_reverse_rotate_a(t_list *lst_a, t_list *lst_b);
void					ps_reverse_rotate_b(t_list *lst_a, t_list *lst_b);
void					ps_reverse_rotate_rrr(t_list *lst_a, t_list *lst_b);

/*
** PUSH_SWAP FUNCTIONS
*/

int		ps_which_rotate(t_node *cur, t_node *max);
t_node	*ps_min_value(t_node *cur);
void	ps_main_algo(t_list *a, t_list *b, t_node *cur);
//int		main(int argc, char **argv);

/*
** CHECK LIST FUNCTIONS
*/

int		ps_check_list_rising(t_node *back, t_node *front);
int		ps_check_list_falling(t_node *back, t_node *front);
int		ps_check_tail(t_list *lst_a, t_list *lst_b);
int		ps_check_list_first(t_list *lst_a, t_list *lst_b,
		t_node *back, t_node *front);
int		ps_check_final(t_list *lst_a, t_list *lst_b);

//int		check_list_sorted(t_list *stack, t_list **head);
//int		check_list_reverse_sorted(t_list *stack, t_list **head);

#endif
