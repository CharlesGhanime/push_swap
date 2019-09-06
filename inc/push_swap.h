/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:30:38 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/06 04:58:52 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>

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
** LIBRARY FUNCTIONS
*/

int						ps_atoi(char *str);
int						ft_isdigit(int c);
t_list					*ft_lstadd(t_list *lst, int value);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_putchar(char c);
void					ft_putnbr(int n);
void					ft_putstr(char const *s);
char					*ft_strcat(char *dst, char *src);
int						ft_strlen(char *s)

/*
** UTILS FUNCTIONS
*/

/*
** PUSH_SWAP FUNCTIONS
*/

#endif
