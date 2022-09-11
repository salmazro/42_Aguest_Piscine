/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:29:33 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/21 18:57:09 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int temp;

	temp = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		temp = temp * nb;
		power--;
	}
	return (temp);
}
