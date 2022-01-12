/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 16:51:42 by yplag             #+#    #+#             */
/*   Updated: 2015/02/27 19:59:35 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void	r_a(t_env *e, int both)
{
	int		size;
	int		tmp;

	size = e->len_a;
	tmp = e->tab_a[e->len_a - 1];
	while (size--)
		e->tab_a[size] = e->tab_a[size - 1];
	e->tab_a[0] = tmp;
	if (both == 0)
	{
		ft_putstr("ra ");
		print(e);
	}
	e->count++;
}

void	r_b(t_env *e, int both)
{
	int		size;
	int		tmp;

	size = e->len_b;
	tmp = e->tab_b[e->len_b - 1];
	while (size--)
		e->tab_b[size] = e->tab_b[size - 1];
	e->tab_b[0] = tmp;
	if (both == 0)
	{
		ft_putstr("rb ");
		print(e);
	}
	e->count++;
}

void	rr_a(t_env *e, int both)
{
	int		size;
	int		tmp;
	int		i;

	i = 0;
	size = e->len_a;
	tmp = e->tab_a[0];
	while (size)
	{
		e->tab_a[i] = e->tab_a[i + 1];
		size--;
		i++;
	}
	e->tab_a[e->len_a - 1] = tmp;
	if (both == 0)
	{
		ft_putstr("rra ");
		print(e);
	}
	e->count++;
}

void	rr_b(t_env *e, int both)
{
	int		size;
	int		tmp;
	int		i;

	i = 0;
	size = e->len_b;
	tmp = e->tab_b[0];
	while (size)
	{
		e->tab_b[i] = e->tab_b[i + 1];
		size--;
		i++;
	}
	e->tab_b[e->len_b - 1] = tmp;
	if (both == 0)
	{
		ft_putstr("rrb ");
		print(e);
	}
	e->count++;
}
