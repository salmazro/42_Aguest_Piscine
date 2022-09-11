/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:53:54 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/07 14:27:13 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num[20];
	int		temp;
	int		i;

	temp = nb;
	i = 0;
	if (temp < 0)
	{
		write(1, "-", 1);
		temp = -1 * temp;
	}
	if (temp == 0)
		write(1, "0", 1);
	while (temp > 0)
	{
		num[20 - i - 1] = temp % 10 + '0';
		temp = temp / 10;
		i++;
	}
	write(1, &num, 20);
}
