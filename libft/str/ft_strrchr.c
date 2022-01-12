/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:58:16 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:58:17 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The strrchr() function returns a pointer to the last occurrence of  the
** character c in the string s.
*/

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *ret;

	ret = 0;
	while (*s)
	{
		if (*s == (char)c)
			ret = s;
		s++;
	}
	if (*s == (char)c)
		ret = s;
	return ((char *)ret);
}
