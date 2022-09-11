/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:41:40 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/21 12:22:38 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size;
	char	nbr_a[100];

	size = 0;
	i = 0;
	while (base[size] != 0)
	{
		if (base[size] != base[size + 1] || base[size] != '+' ||
				base[size] != '-')
			size++;
		else
			return ;
	}
	i = 0;
	while (nbr > 0)
	{
		nbr_a[i] = nbr % size;
		nbr = nbr / size;
		i++;
	}
	while (--i >= 0)
	{
		ft_putchar(base[nbr_a[i]]);
	}	
}
