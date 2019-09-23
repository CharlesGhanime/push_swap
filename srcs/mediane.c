/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 18:41:25 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/23 20:21:59 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "push_swap.c"
#include <stdlib.h>
#include <stdio.h>

int		*mediane(int *a, int len_a)
{
	int *med;
	int *tmp;
	int i;
	int j;

	med = (int *)malloc(sizeof(int) * len_a);
	tmp = (int *)malloc(sizeof(int) * len_a);
	med = a;
	i = 1;
	j = 0;
	while (i < len_a + 1)
	{
		if (med[j] < med[j - 1] && i != 0)
		{
			tmp[0] = med[j];
			med[j] = med[j - 1];
			med[j - 1] = tmp[0];
		}
		i++;
		j++;
	}
	i = 1;
	j = 0;
	while (i <= len_a)
	{
		if (med[j] > med[j - 1])
		{
			i++;
			j++;
		}
		else
			mediane(a, len_a);
	}
	return (a);
}

int main(int argc, char **argv)
{
	int *a;
	int i;
	int j;
	int len_a;

	len_a = argc - 1;
	a = (int *)malloc(sizeof(int) * len_a);
	i = 1;
	j = 0;
	while (i < len_a + 1)
	{
		a[j] = atoi(argv[i]);
		i++;
		j++;
	}
	printf("%d\n", argc);
	a = mediane(a, len_a);
	i = 0;
	while (i != len_a)
	{
		printf("a[%d] ", i);
		printf("-> [%d]\n", a[i]);
		i++;
	}
}
