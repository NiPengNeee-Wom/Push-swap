/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:39:52 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:39:52 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memccpy() function copies no more than n bytes from memory area src
** to memory area dest, stopping when the character c is found.
*/

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dswap;
	const char	*sswap;

	if (n && dest && src)
	{
		dswap = dest;
		sswap = src;
		while (n--)
		{
			if (*sswap == c)
			{
				*dswap++ = *sswap++;
				return (dswap);
			}
			*dswap++ = *sswap++;
		}
	}
	return (0);
}
