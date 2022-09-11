/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:50:42 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/08 16:33:12 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int rev[size];

	i = 0;
	while (i <= size)
	{
		rev[size - i - 1] = tab[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d", rev[i]);
		i++;
	}
}

int main()
{
	int *tab;
	int a[6] = {5, 4 , 8 , 9, 2 , 7};
	tab = a;
	ft_rev_int_tab(a, 6);
}
