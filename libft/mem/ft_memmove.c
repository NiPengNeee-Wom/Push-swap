/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:40:55 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:40:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  memmove()  function  copies n bytes from memory area src to memory
** area dest.  The memory areas may overlap: copying takes place as though
** the  bytes in src are first copied into a temporary array that does not
** overlap src or dest, and the bytes are then copied from  the  temporary
** array to dest.
*/

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	void	*swap[n];

	ft_memcpy(swap, src, n);
	ft_memcpy(dest, swap, n);
	return (dest);
}
