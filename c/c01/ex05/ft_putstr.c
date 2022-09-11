/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:51:27 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/08 14:09:36 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	while (*str != '\0')
		{
			write(1, str, 1);
			str++;
		}
}

int main()
{
	ft_putstr("hello SSM");
	return(0);
}