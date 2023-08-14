/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <afuentes@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:07:31 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/14 16:31:03 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp1;
	int		temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}
