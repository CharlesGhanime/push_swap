/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:56:32 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/08 02:45:38 by cghanime         ###   ########.fr       */
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
		tab = ft_strsplit(av[counter], ' ');
		ft_join_tab(tab, &s);
		ft_free_tab(tab);
		counter++;
	}
	arg = ft_strsplit(s, '\n');
	ft_strdel(&s);
	return (arg);
}
