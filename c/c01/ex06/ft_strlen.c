/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:16:03 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/08 14:46:29 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int c;

	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

int	main(void)
{
	int x;
	char *a;
   
	*a = "hello";

	x = ft_strlen(a);
	printf("%d ", x);
	return (0);
}
