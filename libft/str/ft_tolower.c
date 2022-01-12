/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:58:57 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:58:57 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** tolower() converts the letter c to lower case, if possible.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}
