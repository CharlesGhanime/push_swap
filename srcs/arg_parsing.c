/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:56:32 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/06 17:59:23 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	**arg_parsing(char **av)
{
	int i;
	char **input;
	char **output;

	i = 0;
	input = NULL;
	output = NULL;
	while (av[i])
	{ 
		input = ft_strsplit(av[i], ' ');
		i++;
	}
	printf("input = %s\n", input);
//	output = ft_strsplit(input, ' ');
//	printf("output = %s\n", output);
//	return (output);
	return (NULL);
}

int		main(int argc, char **argv)
{
	char **output;

	output = NULL;
	output = arg_parsing(argv, argc);
	return (0);
}
