/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:48:50 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 02:46:40 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		arg_size(char **arg)
{
	int		i;

	i = 0;
	while (arg && arg[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	t_ps	ps;
	char	**arg;

//	arg = NULL;
//	arg = init_tab(arg);
	if (argc == 1)
		return (0);
	arg = get_arg(argv + 1);
	init_ps(&ps, arg_size(arg));
	master_a_to_b(&ps, ps.len_a);
	free_ps(&ps);
	return (0);
}
