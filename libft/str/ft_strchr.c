/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:54:54 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:54:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  The  strchr() function returns a pointer to the first occurrence of the
**	character c in the string s.
*/

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
