/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:21:29 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/12 19:41:05 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	num;

	if (n < 0)
	{
		num = 'N';
		write(1, &num, 1);
	}
	else
	{
		num = 'P';
		write(1, &num, 1);
	}
}
