/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:55:49 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:55:50 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Similar to ft_strchr, but return an int (index) indicating the position of
** first character searched and found in the string.
** Returns -1 if fail.
*/

#include "libft.h"

int		ft_strindex(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (!s[i])
			return (-1);
		i++;
	}
	return (i);
}
