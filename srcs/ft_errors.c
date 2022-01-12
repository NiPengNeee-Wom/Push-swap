/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/26 18:42:04 by yplag             #+#    #+#             */
/*   Updated: 2015/04/01 17:11:17 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/header.h"

int		check_errors(int ac, char **av, int flag)
{
	if (check_nbr_arg(ac, flag) == 0)
		return (0);
	if (check_arg_type(av, flag) == 0)
		return (0);
	if (check_double(ac, av, flag) == 0)
		return (0);
	if (check_int_max(av, flag) == 0)
		return (0);
	return (1);
}

int		check_nbr_arg(int ac, int flag)
{
	if (flag == 0)
	{
		if (ac < 2)
		{
			return (0);
		}
	}
	if (flag > 0)
	{
		if (ac < 3)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
	}
	return (1);
}

int		check_int_max(char **av, int flag)
{
	int		i;

	i = 1;
	if (flag > 0)
		i = 2;
	while (av[i])
	{
		if (ft_atoi_long(av[i]) > 2147483647 \
				|| ft_atoi_long(av[i]) <= -2147483648)
		{
			ft_putstr_fd("Error\n", 2);
			return (0);
		}
		i++;
	}
	return (1);
}

int		check_double(int ac, char **av, int flag)
{
	int		i;
	int		j;

	j = 1;
	if (flag > 0)
		j = 2;
	while (av[j])
	{
		i = j;
		while (i < ac - 1)
		{
			if (ft_atoi(av[j]) == ft_atoi(av[i + 1]))
			{
				ft_putstr_fd("Error\n", 2);
				return (0);
			}
			i++;
		}
		j++;
	}
	return (1);
}

int		check_arg_type(char **av, int flag)
{
	int		i;
	int		j;

	i = 1;
	if (flag > 0)
		i = 2;
	while (av[i])
	{
		j = 0;
		if (av[i][0] != '-')
			if (check_arg1(av, i, j) == 1)
				return (0);
		if (av[i][0] == '-' && !flag)
			if (check_arg2(av, i, j) == 1)
				return (0);
		if ((av[i][0] == '-' && flag > 0) || (flag > 0 && av[i][0] \
					== '-' && !ft_isdigit(av[i][1])))
			if (check_arg3(av, i, j) == 1)
				return (0);
		if (av[i][0] == '-' && !av[i][1])
			if (check_arg4() == 1)
				return (0);
		i++;
	}
	return (1);
}
