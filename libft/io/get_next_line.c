/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:31:27 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 14:48:33 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_there_line(char *left, char **line)
{
	char	*end;

	if (!left)
		return (0);
	if ((end = ft_strchr(left, '\n')))
	{
		*line = ft_strsub(left, 0, ft_strlen(left) - ft_strlen(end));
		return (1);
	}
	return (0);
}

int		get_next_line(int const fd, char **line)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static char		*left;

	if (fd < 0 || !line)
		return (-1);
	if (is_there_line(left, line))
	{
		left = ft_strchr(left, '\n') + 1;
		return (1);
	}
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		left = ft_strjoin(left, buf);
		if (is_there_line(left, line))
		{
			left = ft_strchr(left, '\n') + 1;
			return (1);
		}
	}
	if (!left)
		left = ft_strnew(1);
	*line = ft_strdup(left);
	return (0);
}
