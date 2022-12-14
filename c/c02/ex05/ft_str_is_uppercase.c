/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:02:45 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/10 16:35:59 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (str[i] != 0 && x == 1)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			x = 0;
		i++;
	}
	return (x);
}
