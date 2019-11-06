/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 20:56:32 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/01 21:59:14 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	**arg_parsing(char **argv, int argc)
{
	int i;
	char *input;
	char **output;

	i = 1;
	input = NULL;
	output = NULL;
	while (i < argc)
	{ 
		input = ft_strjoin(input, argv[i]);
		i++;
	}
	output = ft_strsplit(input, ' ');
	printf("output = %s\n", output);
	return (&output);
}

int		main(int argc, char **argv)
{
	char **output;

	output = NULL;
	output = arg_parsing(argv, argc);
	return (0);
}
