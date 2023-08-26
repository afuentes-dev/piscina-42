/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_condition4-1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tortiz-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:05:10 by tortiz-r          #+#    #+#             */
/*   Updated: 2023/08/20 21:42:52 by tortiz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_condition4_1(char *str)
{
	if (str[0] == '4' && str[28] != '1')
		return (2);
	else if (str[6] == '4' && str[30] != '1')
		return (2);
	else if (str[8] == '4' && str[16] != '1')
		return (2);
	else if (str[14] == '4' && str[24] != '1')
		return (2);
	else if (str[16] == '4' && str[6] != '1')
		return (2);
	else if (str[22] == '4' && str[14] != '1')
		return (2);
	else if (str[24] == '4' && str[0] != '1')
		return (2);
	else if (str[30] == '4' && str[22] != '1')
		return (2);
	else
		return (0);
}
