/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:55:13 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:55:14 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   The  strcpy()  function  copies the string pointed to by src, including
**   the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
**   The  strings  may  not overlap, and the destination string dest must be
**   large enough to receive the copy.
**   If  the  length of src is less than n, strncpy() writes additional null
**   bytes to dest to ensure that a total of n bytes are written.
*/

#include "libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
