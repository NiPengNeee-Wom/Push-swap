/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrindex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:58:23 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:58:24 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Similar to ft_strrchr, but return an int (index) indicating the position of
** last character searched and found in the string.
** Returns -1 if fail.
*/

#include "libft.h"

int		ft_strrindex(const char *s, int c)
{
	int	ret;
	int	i;

	i = 0;
	ret = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = i;
		i++;
	}
	if (s[i] == (char)c)
		ret = i;
	return (ret);
}
