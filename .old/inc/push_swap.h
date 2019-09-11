/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:30:38 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/11 18:01:52 by cghanime         ###   ########.fr       */
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
/*
t_ab					init_stacks(t_ab stack);
t_ab					*get_stack_head(t_ab stack);
*/
void					ps_ok();
void					ps_ko();
void					ps_error();
void					ps_check_double(t_list *lst, int value);
void					ps_swap_a(t_list *stack_a);
void					ps_swap_b(t_list *stack_b);
void					ps_swap_ss(t_list *stack_a, t_list *stack_b);
void					ps_push_a(t_list *stack_a, t_list *stack_b);
void					ps_push_b(t_list *stack_a, t_list *stack_b);
void					ps_push_ss(t_list *stack_a, t_list *stack_b);
void					ps_rotate_a(t_list *stack_a, t_list **head_a);
void					ps_rotate_b(t_list *stack_b, t_list **head_b);
void					ps_rr(t_list *stack_a, t_list *stack_b,
						t_list **head_a, t_list **head_b);
void					ps_reverse_rotate_a(t_list *stack_a, t_list **head_a);
void					ps_reverse_rotate_b(t_list *stack_b, t_list **head_b);
void					ps_rrr(t_list *stack_a, t_list *stack_b,
						t_list **head_a, t_list **head_b);

/*
** PUSH_SWAP FUNCTIONS
*/

int		check_list_sorted(t_list *stack, t_list **head);
int		check_list_reverse_sorted(t_list *stack, t_list **head);

#endif
