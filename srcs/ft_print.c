/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/08 19:56:35 by yplag             #+#    #+#             */
/*   Updated: 2015/02/27 21:36:09 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

void		print(t_env *e)
{
	char	*r;
	char	*b;

	r = "r";
	b = "b";
	if (e->flag == 2)
	{
		ft_putstr("\n");
		ft_putstr("Pile A: ");
		print_tab_a(e);
		ft_putstr("\n");
		ft_putstr("Pile B: ");
		print_tab_b(e);
		ft_putstr("\n");
	}
	if (e->flag == 1)
	{
		ft_putstr("\n");
		ft_putstr_clr("Pile A: ", r);
		print_tab_a(e);
		ft_putstr("\n");
		ft_putstr_clr("Pile B: ", b);
		print_tab_b(e);
		ft_putstr("\n");
	}
}

void		print_tab_a(t_env *e)
{
	int		i;
	int		size;

	i = 0;
	size = e->len_a;
	while (size--)
	{
		ft_putnbr(e->tab_a[i++]);
		ft_putstr(" ");
	}
}

void		print_tab_b(t_env *e)
{
	int		i;
	int		size;

	i = 0;
	size = e->len_b;
	while (size)
	{
		ft_putnbr(e->tab_b[i++]);
		ft_putstr(" ");
		size--;
	}
}

void		print_end(t_env *e)
{
	if (e->count != 0)
		if (e->flag == 0 || e->flag == 3)
			ft_putchar('\n');
	if (e->flag == 3)
	{
		ft_putstr("Nombre de coups:");
		ft_putnbr(e->count);
		ft_putchar('\n');
	}
}
