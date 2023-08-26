/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones_rush.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:34:06 by marvin            #+#    #+#             */
/*   Updated: 2023/08/26 23:04:28 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "milib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	ft_strlen(char *str)
{
	int	contador;

	contador = 0;
	while (*str != '\0')
	{
		str++;
		contador++;
	}
	return (contador);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_atoi(char *str)
{
	int		resultado;
	int		negativo;

	resultado = 0;
	negativo = 0;
	while (*str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			negativo = !negativo;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultado = resultado * 10 + (*str - '0');
		str++;
	}
	if (negativo)
	{
		resultado = -resultado;
	}
	return (resultado);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
