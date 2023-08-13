/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 23:17:40 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/13 23:34:50 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putnbr(int nb);

int	main(void)
{
	int nb = 42;
	ft_putnbr(nb);
	return (0);
}

void	ftputnbr(int nb)
{
	char	num[2];

	num[0] = '0' + (nb / 10);
	num[1] = '0' + (nb % 10);
	write (1, &num, 2);
}
