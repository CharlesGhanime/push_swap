/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:58:13 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/31 20:27:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int		print_stack(char *name, int *stack, size_t len)
{
	size_t i;
	size_t counter;

	i = 0;
	counter = 1;
	if (len == 0)
		return (0);
	else if (len == 1)
	{
		printf("%s[%ld] = %d\n", name, i, stack[i]);
		return (0);
	}
	else
	{
		while (i < len)
		{
			printf("%s[%ld] = %d\n", name, i, stack[i]);
			counter++;
			i++;
		}
	}
	return (0);
}
/*
   int main(void)
   {
   int b[]={1, 2, 3, 4, 5};

   print_stack(b, 5);
   return(0);
   }
   */
