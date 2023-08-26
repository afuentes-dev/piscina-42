/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:00:29 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/20 21:53:03 by tortiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
//acordarnos de quitar el header stdio.h

int	ft_accept_arg(char *str);

int	main(int argc, char **argv)
{
	char *str;

	str = argv[1];
	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}

	if (ft_accept_arg(str) != 0)
		write (1, "Error\n", 6);
	else
		//codigo de sudoku
//	return (0);
}
