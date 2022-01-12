/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:33:44 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:33:45 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for white-space  characters.   In  the  "C"  and  "POSIX"
** locales,  these  are:  space,  form-feed ('\f'), newline ('\n'),
** carriage return ('\r'), horizontal tab ('\t'), and vertical  tab
** ('\v').
*/

#include "libft.h"

int ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
			|| c == ' ')
		return (1);
	return (0);
}
