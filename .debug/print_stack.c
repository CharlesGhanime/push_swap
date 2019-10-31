/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:58:13 by cghanime          #+#    #+#             */
/*   Updated: 2019/10/30 16:34:54 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int		print_stack(int *stack, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		printf("stack[%ld] = %d\n", i, stack[i]);
		i++;
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
