/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:46:30 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/12 19:39:38 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	num;

	number = 0;
	while (number <= 9)
	{
		num = number + '0';
		write (1, &num, 1);
		number ++;
	}
}
