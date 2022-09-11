/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:42:06 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/24 15:42:08 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;
	int *num;

	i = min;
	j = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num = (int *)malloc(sizeof(int) * (max - min));
	if (num == 0)
		return (-10);
	while (i < max)
	{
		num[j] = i;
		i++;
		j++;
	}
	*range = num;
	return (j);
}
