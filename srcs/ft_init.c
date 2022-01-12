/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 17:29:48 by yplag             #+#    #+#             */
/*   Updated: 2015/02/27 19:35:40 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		struct_init(int ac, char **av, t_env *e, int flag)
{
	int		i;

	if (flag > 0)
		ac--;
	e->tab_a = malloc(sizeof(int*) * ac - 1);
	e->tab_b = malloc(sizeof(int*) * ac - 1);
	e->sort = malloc(sizeof(int*) * ac - 1);
	i = 0;
	e->nbr_arg = ac - 1;
	e->count = 0;
	e->len_b = 0;
	e->len_a = ac - 1;
	e->ac = ac;
	e->av = av;
	e->flag = flag;
	if (flag > 0)
		ac++;
	while (ac > 1)
	{
		e->tab_a[i] = ft_atoi_long(av[ac - 1]);
		e->sort[i] = ft_atoi_long(av[ac - 1]);
		ac--;
		i++;
	}
}
