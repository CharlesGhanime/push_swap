/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:30:38 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 15:04:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
/*
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
*/
typedef struct			s_list
{
	int					value;
	struct s_list		*next;
}						t_list;

/*
** LIBRARY FUNCTIONS
*/

int						ps_atoi(char *str);
int						ps_isdigit(int c);
t_list					*ps_lstadd(t_list **head, int value);
t_list					*ps_lstnew(void);
void					ps_putchar(char c);
void					ps_putnbr(int n);
void					ps_putstr(char const *s);
char					*ps_strcat(char *dst, char *src);
int						ps_strlen(char *s);

/*
** UTILS FUNCTIONS
*/
void					ps_swap(t_list *lst);
void					ps_swap_ss(t_list *lst_a, t_list *lst_b);
void					ps_push(t_list *lst_1, t_list *lst_2);

/*
** PUSH_SWAP FUNCTIONS
*/

#endif
