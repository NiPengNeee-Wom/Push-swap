/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/05 10:06:20 by yplag             #+#    #+#             */
/*   Updated: 2015/03/05 11:05:22 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		algo_4(t_env *e)
{
	if (e->len_a == 3)
	{
		if (sorted(e->tab_a, e->len_a))
			return ;
		else if (e->tab_a[2] == e->sort[0])
		{
			rr_a(e, 0);
			sa(e, 0);
		}
		else if (e->tab_a[0] == e->sort[1] && e->tab_a[1] == e->sort[0])
		{
			rr_a(e, 0);
			rr_a(e, 0);
		}
		else if (e->tab_a[2] == e->sort[1] && e->tab_a[0] == e->sort[0])
			rr_a(e, 0);
		else if (e->tab_a[0] == e->sort[0] && e->tab_a[1] == e->sort[1])
		{
			rr_a(e, 0);
			rr_a(e, 0);
			sa(e, 0);
		}
	}
}
