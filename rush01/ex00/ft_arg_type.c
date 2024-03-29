/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:12:57 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/20 21:57:06 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_arg_type(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 49 && str[i] <= 52)
			i++;
		else if (str[i] == 32 || str[i] == '\t')
			i++;
		else
			return (2);
	}
	return (0);
}
