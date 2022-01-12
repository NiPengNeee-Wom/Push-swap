/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yplag <yplag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 12:28:03 by yplag             #+#    #+#             */
/*   Updated: 2015/02/06 12:28:04 by yplag            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Print a character on the specified file descriptor.
*/

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
