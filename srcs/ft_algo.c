/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/07 18:08:18 by yplag             #+#    #+#             */
/*   Updated: 2015/03/06 19:26:09 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		algo(t_env *e)
{
	int	i;

	i = 0;
	while (!sorted(e->tab_a, e->len_a))
	{
		algo_4(e);
		algo_3(e);
		if (!sorted(e->tab_a, e->len_a) && e->sort[i] \
				!= e->tab_a[e->len_a - 1] && !start_or_end(e, e->sort[i]))
			algo_1(e, i);
		else if (!sorted(e->tab_a, e->len_a) && e->sort[i] \
				!= e->tab_a[e->len_a - 1] && start_or_end(e, e->sort[i]))
			algo_2(e, i);
		if (!sorted(e->tab_a, e->len_a) && e->sort[i] == e->tab_a[e->len_a - 1])
		{
			p_b(e);
			i++;
		}
	}
	while (e->len_b > 0)
		p_a(e);
}

void		algo_3(t_env *e)
{
	if ((e->sort[e->nbr_arg - 1] == e->tab_a[1]) \
			&& ((e->sort[e->nbr_arg - 2] == e->tab_a[0])) && e->len_a > 2)
	{
		rr_a(e, 0);
		rr_a(e, 0);
		sa(e, 0);
		r_a(e, 0);
		r_a(e, 0);
	}
}

void		algo_1(t_env *e, int i)
{
	if (!sorted(e->tab_a, e->len_a) && e->sort[i] != e->tab_a[e->len_a - 1])
		r_a(e, 0);
}

void		algo_2(t_env *e, int i)
{
	if (!sorted(e->tab_a, e->len_a) && e->sort[i] != e->tab_a[e->len_a - 1])
		rr_a(e, 0);
}
