/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afuentes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:50:40 by afuentes          #+#    #+#             */
/*   Updated: 2023/08/13 17:49:52 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <unistd.h>

void  ft_print_comb2(void);
int  main(void)
{
  ft_print_comb2();
  return '0';
}

void  ft_print_comb2(void)
{
  char  num[5];
  int   dig1;
  int   dig2;

  dig1 = 0;
  dig2 = 1;
  while (dig1 <= '98' || dig2 <= '99')
  {

    write (1, &num, 5);
  }
}
