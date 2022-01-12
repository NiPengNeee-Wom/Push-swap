/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:41:02 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:41:03 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  memset()  function  fills  the  first  n  bytes of the memory area
** pointed to by s with the constant byte c.
*/

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *swap;

	if (n)
	{
		swap = s;
		while (n--)
			*swap++ = c;
	}
	return (s);
}
