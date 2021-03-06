/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:33:17 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:33:17 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for any printable character except space.
*/

#include "libft.h"

int ft_isgraph(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}
