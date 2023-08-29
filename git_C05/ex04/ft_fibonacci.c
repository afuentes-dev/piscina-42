/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:16:23 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/29 21:53:13 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	int	i;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	i = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
	return (i);
}
