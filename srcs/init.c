/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:42:34 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/26 19:26:54 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	init_ps(t_ps *ps, size_t len)
{
	ps->a = NULL;
	ps->b = NULL;
	ps->mediane = NULL;
	ps->a = (int64_t *)malloc(sizeof(int64_t) * len);
	ps->b = (int64_t *)malloc(sizeof(int64_t) * len);
	init_stack(&ps->a, len);
	init_stack(&ps->b, len);
	ps->len_a = len;
	ps->len_b = 0;
	ps->push_len = 0;
	ps->recur_size = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
}

void		init_stack(int64_t **tab, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		tab[0][i] = 0;
		i++;
	}
	tab[0][i] = END;
}

void	init_tab(char ***tab)
{
	size_t i;

	i = 0;
	while (tab[i])
	{
		tab[i] = NULL;
		i++;
	}
}

size_t		stack_len(int64_t *stack)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (stack[i] != END)
	{
		len++;
		i++;
	}
	return (len);
}

void		fill_stack_a(int64_t **stack_a, char **arg)
{
	size_t	i;

	i = 0;
	while (arg[i] != NULL)
	{
		stack_a[0][i] = ft_atoi(arg[i]);
		i++;
	}
	stack_a[0][i] = (int64_t)END;
}
/*
int main()
{
	size_t i = 0;
	char *arg[4];
	int64_t *stack_a;

	arg[0] = "1";
	arg[1] = "2";
	arg[2] = "3";
	arg[3] = NULL;
	stack_a = malloc(sizeof(int64_t) * 4 + 1);
	fill_stack_a(stack_a, arg);
	while (stack_a[i] != END)
	{
		PTF("stack_a[i] = %lld\n", stack_a[i]);
		i++;
	}
		PTF("stack_a[i] = %lld\n", stack_a[i]);
	return (0);
}
*/
int64_t		free_ps(t_ps *ps)
{
	free(ps->a);
	free(ps->b);
	ps->a = NULL;
	ps->b = NULL;
	ps->mediane = NULL;
	ps->len_a = 0;
	ps->len_b = 0;
	ps->push_len = 0;
	ps->recur_size = 0;
	ps->args_nb = 0;
	ps->mv_nb = 0;
	ps->pivot = 0;
	free(ps);
	ps = NULL;
	return (0);
}
