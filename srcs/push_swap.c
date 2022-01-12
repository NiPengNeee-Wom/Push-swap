/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 18:20:56 by yplag             #+#    #+#             */
/*   Updated: 2015/02/27 18:40:24 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int		main(int ac, char **av)
{
	t_env	e;
	int		flag;

	flag = get_flag(av);
	if (check_errors(ac, av, flag) == 0)
		return (0);
	struct_init(ac, av, &e, flag);
	tri_tab(e.sort, e.nbr_arg);
	algo(&e);
	print_end(&e);
	return (0);
}
