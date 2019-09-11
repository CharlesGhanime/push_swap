/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:21:12 by cghanime          #+#    #+#             */
/*   Updated: 2018/11/22 20:20:01 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static	void	ps_int_limit(void)
{
	ps_putchar('-');
	ps_putchar('2');
	ps_putchar('1');
	ps_putchar('4');
	ps_putchar('7');
	ps_putchar('4');
	ps_putchar('8');
	ps_putchar('3');
	ps_putchar('6');
	ps_putchar('4');
	ps_putchar('8');
}

void			ps_putnbr(int n)
{
	if (n == -2147483648)
		ps_int_limit();
	else
	{
		if (n < 0)
		{
			ps_putchar('-');
			n = n * -1;
		}
		if (n >= 0 && n <= 9)
			ps_putchar(n + 48);
		if (n >= 10)
		{
			ps_putnbr(n / 10);
			ps_putnbr(n % 10);
		}
	}
}
