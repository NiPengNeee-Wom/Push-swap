/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:32:31 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:32:32 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for an alphanumeric character; it is equivalent to
** (isalpha(c) || isdigit(c)).
*/

#include "libft.h"

int		ft_isalnum(int i)
{
	if (ft_isalpha(i) || ft_isdigit(i))
		return (1);
	return (0);
}
