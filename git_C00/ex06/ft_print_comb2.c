/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:50:40 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/13 23:22:44 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	char	num[5];
	int		dig1;
	int		dig2;

	dig1 = 0;
	while (dig1 <= 98)
	{
		dig2 = dig1 + 1;
		while (dig2 <= 99)
		{
			num[0] = '0' + (dig1 / 10);
			num[1] = '0' + (dig1 % 10);
			num[2] = ' ';
			num[3] = '0' + (dig2 / 10);
			num[4] = '0' + (dig2 % 10);
			write (1, &num, 5);
			if (dig1 != 98 || dig2 != 99)
			{
				write (1, ", ", 2);
			}
			dig2++;
		}
		dig1++;
	}
}
