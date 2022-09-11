/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:08:16 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/24 15:40:11 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	s2 = (char*)malloc(1 * (i + 1));
	if (s2 == 0)
		return (NULL);
	while (src[j] != 0)
	{
		s2[j] = src[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
