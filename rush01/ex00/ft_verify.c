/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:32:22 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/20 21:52:38 by tortiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_verify(char *str)
{
	int	i;
	int	j;
	int	one;
	int	four;

	i = 0;
	if (str[31] != '\0')
		return (2);
	while (str[i] != '\0')
	{
		j = 0;
		num1 = 0;
		num4 = 0;
		while (j <= 6 && num1 < 2 && num4 < 2)
		{
			if (str[i + j] == '1')
				num1++;
			else if (str[i + j] == '4')
				num4++;
			j = j + 2;
		}
		i = i + 8;
		if (num1 > 1 || num4 > 1)
			return (2);
	}
	return (0);
}
