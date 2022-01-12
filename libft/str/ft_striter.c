/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:55:56 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:55:56 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Apply the function f to every character of the character string
** given in parameter. The adress of every character is given to
** function f to be able to be modified if needed.
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char*))
{
	if (!s || !f)
		return ;
	while (*s)
		f(s++);
}
