/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:32:36 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/13 17:47:08 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	letter[3];

	letter[0] = '0';
	while (letter[0] <= '7')
	{
		letter[1] = letter[0] + 1;
		while (letter[1] <= '8')
		{
			letter[2] = letter[1] + 1;
			while (letter[2] <= '9')
			{
				write (1, &letter, 3);
				if (letter[0] != '7' || letter[1] != '8' || letter[2] != '9' )
					write (1, ", ", 2);
				letter[2]++;
			}
		letter[1]++;
		}
	letter[0]++;
	}
}
