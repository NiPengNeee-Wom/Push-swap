/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:56:01 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 13:00:47 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Apply the function f to every character of the character string
** given in parameter by specifying its index in first argument.
** The adress of every character is given to
** function f to be able to be modified if needed.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
