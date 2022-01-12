/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:57:32 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:57:33 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The  strncpy()  function is similar, except that at most n bytes of src
** are copied.  Warning: If there is no null byte among the first n  bytes
** of src, the string placed in dest will not be null-terminated.
** If  the  length of src is less than n, strncpy() writes additional null
** bytes to dest to ensure that a total of n bytes are written.
*/

#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i] && i != n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i != n && !src[i])
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
