/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:48:50 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/29 00:59:32 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void		ft_join_tab(char **tab, char **s)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (!(ft_str_isnumeric(tab[i]) || (tab[i][0] == '-'
		&& ft_str_isnumeric(tab[i] + 1))))
		{
			ft_free_tab(tab);
			ft_putendl_fd("Error", 2);
			exit(1);
		}
		//		*s = ft_strjoinfree(*s, tab[i], 1);
		*s = ft_strjoin(*s, tab[i]);
		//		*s = ft_strjoinfree(*s, "\n", 1);
		*s = ft_strjoin(*s, "\n");
		i++;
	}
}

static char		**get_arg(char **av)
{
	char	**arg;
	char	**tab;
	char	*s;
	int		counter;

	s = NULL;
	counter = 0;
	while (av[counter])
	{
		tab = ft_strsplit(av[counter], ' ');
		ft_join_tab(tab, &s);
		ft_free_tab(tab);
		counter++;
	}
	arg = ft_strsplit(s, '\n');
	ft_strdel(&s);
	return (arg);
}

uint64_t				arg_size(char **arg)
{
	size_t		i;

	i = 0;
	while (arg && arg[i])
		i++;
	return (i);
}

int				main(int ac, char **av)
{
	t_ps	ps;
	char	**arg;

	//	arg = NULL;
	init_tab(&arg);
//	ft_print_tab(arg);
	if (ac == 1)
		return (0);
//	ps.a = NULL;
//	ps.b = NULL;
	arg = get_arg(av + 1);
	PTF("ps.arg_nb = %lld | arg_size = %lld\n", ps.args_nb, arg_size(arg));
	init_ps(&ps, arg_size(arg));
	ps.args_nb = arg_size(arg);
	ps.len_a = ps.args_nb;
	fill_stack_a(&ps.a, arg);
	PFLA;
	ft_print_tab(arg);
	PTF("coucou avant la master\n");
	master_a_to_b(&ps, ps.len_a);
	PTF("coucou apres la master\n");
	//	free_ps(&ps);
	return (0);
}
