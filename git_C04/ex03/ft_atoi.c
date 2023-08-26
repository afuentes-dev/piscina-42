/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:31:26 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/26 22:17:59 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		i;
	int		c;
	int		nbr;

	nbr = 0;
	c = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			c *= -1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr *= 10;
		nbr += str[i] - 48;
		i++;
	}
	return (nbr * c);
}

int main(void)
{
	char str[] = "----1234";

	printf("%d", ft_atoi(str));
	return (0);
}
