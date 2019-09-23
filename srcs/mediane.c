/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/22 19:03:24 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.c"

int		*mediane(int *a, int len_a)
{
	int *med;
	int *tmp;
	int i;

	med = a;
	i = 0;
	while (i++ < len_a)
		if (med[i + 1] < med[i])
		{
			tmp[0] = med[i];
			med[i] = med[i + 1];
			med[i + 1] = tmp[0];
		}
	mediane(a, len_a);
	return (a);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int *a;
	int i;

	i = 0;
	while (i++ < argc)
	{
		a[i] = atoi(argv[i]);
	}
	mediane(a, argc);
	i = 0;
	while (i++ < argc)
	{
		printf("[%d]", a[i]);
	}
}
