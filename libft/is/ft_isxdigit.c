/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:34:04 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:34:05 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for a hexadecimal digits, that is, one of
** 0 1 2 3 4 5 6 7 8 9 a b c d e f A B C D E F.
*/

#include "libft.h"

int ft_isxdigit(int c)
{
	if (ft_isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f'))
		return (1);
	return (0);
}
