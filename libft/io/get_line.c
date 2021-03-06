/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:31:14 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:31:15 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Read the first line in the specified file descriptor and fill a given string.
** Return 0 if fail, else 1.
*/

#include "libft.h"
#include <unistd.h>

int	get_line(int const fd, char **a)
{
	int		i;
	int		stop;
	char	buf[BUFF_SIZE];

	if (!a || fd < 0)
		return (0);
	*a = ft_strnew(1);
	while ((i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[i] = '\0';
		*a = (char *)ft_realloc((void *)*a, ft_strlen(*a), ft_strlen(*a) + i);
		ft_strcat(*a, buf);
		if ((stop = ft_strindex(*a, '\n')) != -1)
			break ;
	}
	*a = ft_realloc((void *)*a, ft_strlen(*a), stop);
	if (!*a || i < 0)
		return (0);
	return (1);
}
