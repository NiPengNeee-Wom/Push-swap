/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:33:54 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:33:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks for an uppercase letter.
*/

#include "libft.h"

int	ft_isupper(int c)
{
	return (c >= 65 && c <= 90);
}