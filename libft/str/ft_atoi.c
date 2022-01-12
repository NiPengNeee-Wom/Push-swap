/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:54:38 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:54:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The atoi() function converts the initial portion of the string  pointed
**   to by nptr to int.
*/

#include "libft.h"

static int	count_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	return (i);
}

int			ft_atoi(char *str)
{
	int		sign;
	int		num;

	sign = -1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = 0;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str == '0')
		str++;
	if (count_digit(str) > 10)
		return (sign);
	num = 0;
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (!sign)
		num = -num;
	return (num);
}
