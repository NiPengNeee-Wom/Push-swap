/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:57:18 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:57:19 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strncat() function is similar, except that
** it will use at most n bytes from src; and
** src does not need to be null-terminated if it  contains  n  or  more bytes.
** As  with  strcat(),  the resulting string in dest is always null-terminated.
** If src contains n or more bytes, strncat() writes n+1 bytes to dest  (n
** from  src plus the terminating null byte).  Therefore, the size of dest
** must be at least strlen(dest)+n+1.
*/

#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	char *swap;

	swap = dest;
	while (*swap)
		swap++;
	while (*src && (n > 0))
	{
		*swap = *src;
		swap++;
		src++;
		n--;
	}
	*swap = '\0';
	return (dest);
}
