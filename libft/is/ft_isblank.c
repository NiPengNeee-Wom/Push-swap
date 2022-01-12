/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:32:50 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:32:51 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for a blank character; that is, a space or a tab.
*/

#include "libft.h"

int ft_isblank(int i)
{
	if (i == ' ' || i == '\t')
		return (1);
	return (0);
}