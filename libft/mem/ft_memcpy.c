/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:40:10 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:40:41 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  memcpy()  function  copies  n bytes from memory area src to memory
** area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
** memory areas do overlap.
*/

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dswap;
	const char	*sswap;

	dswap = dest;
	sswap = src;
	if (n && dest != src)
	{
		while (n--)
			*dswap++ = *sswap++;
	}
	return (dest);
}
