/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:56:32 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 04:59:55 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	**get_arg(char **av)
{
	char	**arg;
	char	**tab;
	char	*s;
	int		counter;

	s = NULL;
	counter = 0;
	while (av[counter])
	{
		printf("counter = %d\n", counter);
		tab = ft_strsplit(av[counter], ' ');
		int o = 0;
		while (tab[o])
		{
			printf("tab[%d] = %s\n", o, tab[o]);
			o++;
		}
		ft_join_tab(tab, &s);
		printf("tab[0] = %s\n", tab[0]);
		ft_free_tab(tab);
		counter++;
	}
	arg = ft_strsplit(s, '\n');
	printf("arg[0] = %s\n", arg[0]);
	ft_strdel(&s);
	return (arg);
}
