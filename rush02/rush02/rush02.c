/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:35:29 by marvin            #+#    #+#             */
/*   Updated: 2023/08/26 22:14:13 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "milib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getnb(int number)
{
	char	almacenaje;
	char	*str;
	int		i;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		exit(1);
	i = 0;
	read(number, &almacenaje, 1);
	while (almacenaje == '\n')
		read(number, &almacenaje, 1);
	while (almacenaje >= '0' && almacenaje <= '9')
	{
		str[i] = almacenaje;
		read(number, &almacenaje, 1);
		i++;
	}
	return (str);
}

char	*ft_getval(int number, char *num)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (!(str))
		exit(1);
	i = 0;
	while (*num != '\n')
	{
		str[i] = *num;
		read(number, num, 1);
		i++;
	}
	return (str);
}

t_mi_estruct	*leer(char *file)
{
	int				i;
	int				fd;
	char			c[1];
	char			*tmp;
	t_mi_estruct	*tab;

	fd = open(file, O_RDONLY);
	tab = malloc(sizeof(t_mi_estruct) * 33);
	if (fd == -1 || !(tab))
		exit(1);
	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_getnb(fd));
		read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		if (c[0] == ':')
			read(fd, c, 1);
		while (c[0] == ' ')
			read(fd, c, 1);
		tmp = ft_getval(fd, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(fd);
	return (tab);
}
