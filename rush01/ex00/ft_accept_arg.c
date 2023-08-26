/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_accept_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tortiz-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:07:49 by tortiz-r          #+#    #+#             */
/*   Updated: 2023/08/20 21:16:00 by tortiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_verify(char *str);

int ft_arg_type(char *str);

int	ft_condition4_1(char *str);

int	ft_arg_comb(char *str);

int ft_accept_arg(char *str)
{
	int result;

	result = 0;
	if (result == 0)
		result = ft_verify(str);
	if (result == 0)
		result = ft_arg_type(str);
	else
		return (result);
	if (result == 0)
		result = ft_condition4_1(str);
	else
		return (result);
	if (result == 0)
		result = ft_arg_comb(str);
	return (result);
}
