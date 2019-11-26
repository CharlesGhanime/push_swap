/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:25:41 by cghanime          #+#    #+#             */
/*   Updated: 2019/11/26 17:22:31 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

#define END UINT_MAX
#define PTF printf

int64_t		*fill_stack_1(int64_t *stack, char **arg)
{
	size_t i;

	i = 0;
	while (arg[i] != NULL)
	{
		stack[i] = atoi(arg[i]);
		i++;
	}
	stack[i] = (int64_t)END;
	return (stack);
}

void	fill_stack_2(int64_t **stack, char **arg)
{
	size_t i;

	i = 0;
	while (arg[i] != NULL)
	{
		stack[0][i] = atoi(arg[i]);
		i++;
	}
	stack[0][i] = (int64_t)END;
}

int main()
{
	size_t i = 0;
	char *arg[4];
	int64_t *stack_1;
	int64_t *stack_2;

	arg[0] = "1";
	arg[1] = "2";
	arg[2] = "3";
	arg[3] = NULL;
	stack_1 = malloc(sizeof(int64_t) * 4 + 1);
	stack_2 = malloc(sizeof(int64_t) * 4 + 1);
	stack_1 = fill_stack_1(stack_1, arg);
	fill_stack_2(&stack_2, arg);
	while (stack_1[i] != END)
	{
		PTF("stack[i] = %lld\n", stack_1[i]);
		i++;
	}
		PTF("stack[i] = %lld\n", stack_1[i]);
	i = 0;
	while (stack_2[i] != END)
	{
		PTF("stack[i] = %lld\n", stack_2[i]);
		i++;
	}
		PTF("stack[i] = %lld\n", stack_2[i]);
	return (0);
}
