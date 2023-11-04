/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:59:51 by marvin            #+#    #+#             */
/*   Updated: 2023/08/27 18:52:35 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "milib.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int	getdec(int nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

int	getmult(int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

int	esdecimal(const char *cadena)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (cadena[i] != '\0')
	{
		if (!(cadena[i] >= 48 && cadena[i] <= 57))
			return (1);
		i++;
	}
	return (0);
}

void	ft_print(int n, t_mi_estruct *tab, int *first)
{
	int		i;
	int		mult;

	i = 0;
	mult = getmult(n);
	if (mult >= 100)
		ft_print(n / mult, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != mult)
		i++;
	ft_putstr(tab[i].val);
	if (mult != 0 && n % mult != 0)
		ft_print(n % mult, tab, first);
}

int	main(int ac, char **av)
{
	t_mi_estruct	*tab;
	int				first;

	first = 1;
	if (ac == 2)
	{
		if (esdecimal(av[1]) > 0 || ft_atoi(av[1]) < 0)
		{
			write(1, "Dict Error\n", 10);
			return (0);
		}
		tab = leer("numbers.dict");
		ft_print(ft_atoi(av[1]), tab, &first);
		write (1, "\n", 1);
		tab = leer("numbersch2.dict");
		ft_print(ft_atoi(av[1]), tab, &first);
	}
	return (0);
}
