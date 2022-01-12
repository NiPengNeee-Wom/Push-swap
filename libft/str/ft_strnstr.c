/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:58:07 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:58:08 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The `ft_strnstr()` function locates the first occurence of the null-termi-
** nated string `s2` in the string `s1`, where not more than `n` characters
** are searched. Searching for '\0' always succeeds (if `s2` is empty).
*/

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t len;

	if (!*s2)
		return ((char *)s1);
	len = 0;
	while (s2[len])
		len++;
	while (n-- >= len && *s1)
	{
		if (*s1 == *s2 && !ft_memcmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
