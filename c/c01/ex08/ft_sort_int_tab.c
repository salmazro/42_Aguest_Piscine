/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:47:08 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/08 17:39:30 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	while (i <= size)
	{
		j = 0;
		while ( j < size)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
		
	i = 0;
	while ( i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int main()
{
	int *tab;
	int a[6] = {2, 10, 1, 15, 0, 20};
	tab = a;
	ft_sort_int_tab(a, 6);
}
