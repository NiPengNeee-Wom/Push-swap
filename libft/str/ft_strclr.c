/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:55:01 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:55:01 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Assign the value '\0' to all the characters of the string
** given in parameter.
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	while (*s)
		*s++ = '\0';
}
