/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:35:23 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/16 20:54:39 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	ft_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_printable(str[i]) == 1)
			ft_write(str[i]);
		else
		{
			ft_write('\\');
			ft_write("0123456789abcdef" [str[i] / 16]);
			ft_write("0123456789abcdef" [str[i] % 16]);
		}
		i++;
	}
}
