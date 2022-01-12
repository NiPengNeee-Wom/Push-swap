/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 17:32:48 by yplag             #+#    #+#             */
/*   Updated: 2015/02/26 17:46:08 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		tri_tab(int *tab, int size_tab)
{
	int		i;
	int		t;
	int		k;

	i = 0;
	t = 1;
	k = 0;
	while (t < size_tab)
	{
		i = 0;
		while (i < size_tab - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				k = tab[i] - tab[i + 1];
				tab[i] -= k;
				tab[i + 1] += k;
			}
			i++;
		}
		t++;
	}
}

int			sorted(int *tab, int size_tab)
{
	int		check;
	int		i;

	check = 0;
	i = 0;
	while (i < size_tab - 1)
	{
		if (tab[i] < tab[i + 1])
			check = 42;
		i++;
	}
	if (check == 42)
		return (0);
	else
		return (1);
}

int			start_or_end(t_env *e, int littlest)
{
	int		check;
	int		init;
	int		i;
	int		position;

	position = 0;
	i = 0;
	check = e->len_a / 2;
	init = e->len_a;
	while (init)
	{
		if (e->tab_a[i] != littlest)
			position++;
		else if (e->tab_a[i] == littlest)
		{
			position++;
			break ;
		}
		i++;
		init++;
	}
	if (position < check)
		return (1);
	else
		return (0);
}
