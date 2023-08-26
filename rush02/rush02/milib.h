/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   milib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 13:30:25 by marvin            #+#    #+#             */
/*   Updated: 2023/08/26 22:10:47 by afuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MILIB_H
# define MILIB_H

typedef struct s_list
{
	int		nb;
	char	*val;
}		t_mi_estruct;

int				ft_atoi(char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);
char			*ft_getnb(int fd);
char			*ft_getval(int fd, char *c);
t_mi_estruct	*leer(char *file);

#endif
