/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:55:06 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:55:07 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   The  strcmp()  function compares the two strings s1 and s2.  It returns
**   an integer less than, equal to, or greater than zero if  s1  is  found,
**   respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
