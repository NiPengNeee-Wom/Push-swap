/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 20:29:07 by yplag             #+#    #+#             */
/*   Updated: 2015/02/27 20:01:26 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void	sa(t_env *e, int both)
{
	int		tmp;

	tmp = e->tab_a[e->len_a - 2];
	e->tab_a[e->len_a - 2] = e->tab_a[e->len_a - 1];
	e->tab_a[e->len_a - 1] = tmp;
	if (both == 0)
	{
		ft_putstr("sa ");
		print(e);
	}
	e->count++;
}

void	sb(t_env *e, int both)
{
	int		tmp;

	tmp = e->tab_b[e->len_a - 2];
	e->tab_b[e->len_b - 2] = e->tab_b[e->len_b - 1];
	e->tab_b[e->len_b - 1] = tmp;
	if (both == 0)
	{
		ft_putstr("sb ");
		print(e);
	}
	e->count++;
}

void	ss(t_env *e)
{
	sa(e, 1);
	sb(e, 1);
	ft_putstr("ss ");
	print(e);
	print(e);
}
