/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:33:31 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:33:32 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for any printable character including space.
*/

#include "libft.h"

int		ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
		return (1);
	return (0);
}
