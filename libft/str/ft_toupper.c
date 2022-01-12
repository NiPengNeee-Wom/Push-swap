/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:59:03 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:59:04 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** toupper() converts the letter c to upper case, if possible.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
