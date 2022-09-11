 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:25:53 by salmazro          #+#    #+#             */
/*   Updated: 2021/08/16 21:46:56 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != 0)
	{
		j = i + 1;
		if ((str[i] < 48) &&
				(str[j] >= 'a' && str[j] <= 'z'))
			str[j] = str[j] - 32;
		else if ((str[i] > 57 && str[i] < 65) &&
				(str[j] >= 'a' && str[j] <= 'z'))
			str[j] = str[j] - 32;
		else if ((str[i] > 90 && str[i] < 97) &&
				(str[j] >= 'a' && str[j] <= 'z'))
			str[j] = str[j] - 32;
		else if ((str[i] > 'z') &&
				(str[j] >= 'a' && str[j] <= 'z'))
			str[j] = str[j] - 32;
		i++;
	}
	return (str);
}
