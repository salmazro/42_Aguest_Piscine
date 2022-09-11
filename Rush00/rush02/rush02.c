/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:46:07 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/06 21:16:49 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_putchar.c"

void	rush(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if (((a == 1 && b == 1) || (a == x && b == 1)))
				ft_putchar('A');
			else if ((a == 1 && b == y) || (a == x && b == y))
				ft_putchar('C');
			else if ((a > 1 && a < x) && (b > 1 && b < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			a++;
		}
		printf("\n");
		b++;
	}
}
