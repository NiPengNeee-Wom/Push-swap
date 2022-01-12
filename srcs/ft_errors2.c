/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 20:20:25 by yplag             #+#    #+#             */
/*   Updated: 2015/03/05 11:28:44 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int		check_arg1(char **av, int i, int j)
{
	while (av[i][j])
	{
		if (av[i][j] < 48 || av[i][j] > 57)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		j++;
	}
	return (0);
}

int		check_arg2(char **av, int i, int j)
{
	j = 1;
	while (av[i][j])
	{
		if (av[i][j] < 48 || av[i][j] > 57)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		j++;
	}
	return (0);
}

int		check_arg3(char **av, int i, int j)
{
	j++;
	while (av[i][j] && av[i][1])
	{
		if (av[i][j] < 48 || av[i][j] > 57)
		{
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
		j++;
	}
	return (0);
}

int		check_arg4(void)
{
	ft_putstr_fd("Error\n", 2);
	return (0);
}
