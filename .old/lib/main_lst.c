/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:59:28 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/09 13:01:39 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_list(t_list *stack, char * str)
{
	printf("%s : ", str);
	while (stack)
	{
		printf("%d->", stack->value);
		stack = stack->next;
	}
	printf("\n");
}

int main(int argc, char **argv)
{
//	t_list *head_a;
	t_list *stack_a;
	t_list *stack_b;
//	t_list *head_b;

	int i;
	i = 1;
//	head_a = ps_lstnew();
//	head_b = ps_lstnew();
	while (i < argc)
	{
		ps_lstadd(&stack_a, ps_atoi(argv[i]));
		ps_lstadd(&stack_b, ps_atoi(argv[i]));
		i++;
	}
	print_list(stack_a, "stack_a");
	print_list(stack_b, "stack_b");
//	ps_swap_a(stack_a);
//	ps_swap_ss(stack_a, stack_b);
//	ps_swap_b(stack_b);

	ps_rotate_a(stack_a, &stack_a);
	print_list(stack_a, "stack_a");
	print_list(stack_b, "stack_b");
	return (0);
}
