/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:55:24 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:55:25 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Takes in parameter the address of a character string which
** must be freed with free (3) and his pointer set to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void**)as);
}
