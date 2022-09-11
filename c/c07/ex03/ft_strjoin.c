/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:43:15 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/24 15:45:23 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_totallen(int size, char **strs, char *sep)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += ft_strlen(sep) * (size - 1);
	return (l);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*sjoin;
	int		i;

	if (size == 0)
	{
		sjoin = malloc(sizeof(char));
		*sjoin = 0;
		return (sjoin);
	}
	sjoin = malloc(sizeof(char) * ft_totallen(size, strs, sep));
	if (sjoin == NULL)
		return (NULL);
	*sjoin = 0;
	i = 0;
	while (i < size)
	{
		sjoin = ft_strcat(sjoin, strs[i]);
		if (i < size - 1)
			sjoin = ft_strcat(sjoin, sep);
		i++;
	}
	return (sjoin);
}
