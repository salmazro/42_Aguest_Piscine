/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:17:35 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/24 15:40:54 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int j;
	int *num;

	i = min;
	j = 0;
	num = (int*)malloc(sizeof(int) * (max - min));
	if (!num || (min >= max))
		return (NULL);
	while (i < max)
		num[j++] = i++;
	return (num);
}
