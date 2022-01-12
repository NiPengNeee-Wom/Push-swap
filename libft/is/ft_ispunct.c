/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:33:37 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:33:38 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks  for  any  printable character which is not a space or an
** alphanumeric character.
*/

#include "libft.h"

int ft_ispunct(int c)
{
	if (c != ' ' && !ft_isalnum(c) && ft_isprint(c))
		return (1);
	return (0);
}
