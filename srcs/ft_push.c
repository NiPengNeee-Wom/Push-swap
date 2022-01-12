/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 18:40:14 by yplag             #+#    #+#             */
/*   Updated: 2015/02/27 19:59:50 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		p_b(t_env *e)
{
	int		tmp;

	tmp = e->tab_a[e->len_a - 1];
	e->tab_b[e->len_b] = tmp;
	e->len_b++;
	e->len_a--;
	ft_putstr("pb ");
	print(e);
	e->count++;
}

void		p_a(t_env *e)
{
	int		tmp;

	tmp = e->tab_b[e->len_b - 1];
	e->tab_a[e->len_a] = tmp;
	e->len_a++;
	e->len_b--;
	ft_putstr("pa ");
	print(e);
	e->count++;
}
